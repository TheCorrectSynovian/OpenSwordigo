#include "caver/graphics/pvrtc_decoder.h"
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <cassert>
#include <vector>

namespace caver {
namespace pvr {

struct Pixel32
{
	uint8_t red, green, blue, alpha;
};

struct Pixel128S
{
	int32_t red, green, blue, alpha;
};

struct PVRTCWord
{
	uint32_t modulationData;
	uint32_t colorData;
};

struct PVRTCWordIndices
{
	int P[2], Q[2], R[2], S[2];
};

static Pixel32 getColorA(uint32_t colorData)
{
	Pixel32 color;

	// Opaque Color Mode - RGB 554
	if ((colorData & 0x8000) != 0)
	{
		color.red = static_cast<uint8_t>((colorData & 0x7c00) >> 10);
		color.green = static_cast<uint8_t>((colorData & 0x3e0) >> 5);
		color.blue = static_cast<uint8_t>(colorData & 0x1e) | ((colorData & 0x1e) >> 4);
		color.alpha = static_cast<uint8_t>(0xf);
	}
	else
	{
		color.red = static_cast<uint8_t>((colorData & 0xf00) >> 7) | ((colorData & 0xf00) >> 11);
		color.green = static_cast<uint8_t>((colorData & 0xf0) >> 3) | ((colorData & 0xf0) >> 7);
		color.blue = static_cast<uint8_t>((colorData & 0xe) << 1) | ((colorData & 0xe) >> 2);
		color.alpha = static_cast<uint8_t>((colorData & 0x7000) >> 11);
	}

	return color;
}

static Pixel32 getColorB(uint32_t colorData)
{
	Pixel32 color;

	if (colorData & 0x80000000)
	{
		color.red = static_cast<uint8_t>((colorData & 0x7c000000) >> 26);
		color.green = static_cast<uint8_t>((colorData & 0x3e00000) >> 21);
		color.blue = static_cast<uint8_t>((colorData & 0x1f0000) >> 16);
		color.alpha = static_cast<uint8_t>(0xf);
	}
	else
	{
		color.red = static_cast<uint8_t>(((colorData & 0xf000000) >> 23) | ((colorData & 0xf000000) >> 27));
		color.green = static_cast<uint8_t>(((colorData & 0xf00000) >> 19) | ((colorData & 0xf00000) >> 23));
		color.blue = static_cast<uint8_t>(((colorData & 0xf0000) >> 15) | ((colorData & 0xf0000) >> 19));
		color.alpha = static_cast<uint8_t>((colorData & 0x70000000) >> 27);
	}

	return color;
}

static void interpolateColors(Pixel32 P, Pixel32 Q, Pixel32 R, Pixel32 S, Pixel128S* pPixel, uint8_t bpp)
{
	uint32_t wordWidth = 4;
	uint32_t wordHeight = 4;
	if (bpp == 2) { wordWidth = 8; }

	Pixel128S hP = { static_cast<int32_t>(P.red), static_cast<int32_t>(P.green), static_cast<int32_t>(P.blue), static_cast<int32_t>(P.alpha) };
	Pixel128S hQ = { static_cast<int32_t>(Q.red), static_cast<int32_t>(Q.green), static_cast<int32_t>(Q.blue), static_cast<int32_t>(Q.alpha) };
	Pixel128S hR = { static_cast<int32_t>(R.red), static_cast<int32_t>(R.green), static_cast<int32_t>(R.blue), static_cast<int32_t>(R.alpha) };
	Pixel128S hS = { static_cast<int32_t>(S.red), static_cast<int32_t>(S.green), static_cast<int32_t>(S.blue), static_cast<int32_t>(S.alpha) };

	Pixel128S QminusP = { hQ.red - hP.red, hQ.green - hP.green, hQ.blue - hP.blue, hQ.alpha - hP.alpha };
	Pixel128S SminusR = { hS.red - hR.red, hS.green - hR.green, hS.blue - hR.blue, hS.alpha - hR.alpha };

	hP.red *= wordWidth;
	hP.green *= wordWidth;
	hP.blue *= wordWidth;
	hP.alpha *= wordWidth;

	hR.red *= wordWidth;
	hR.green *= wordWidth;
	hR.blue *= wordWidth;
	hR.alpha *= wordWidth;

	if (bpp == 2)
	{
		for (uint32_t y = 0; y < wordHeight; ++y)
		{
			Pixel128S resultBc = hP;
			Pixel128S resultAc = hR;

			for (uint32_t x = 0; x < wordWidth; ++x)
			{
				Pixel128S result = { (resultAc.red * (4 - y) + resultBc.red * y) / 4,
					                 (resultAc.green * (4 - y) + resultBc.green * y) / 4,
					                 (resultAc.blue * (4 - y) + resultBc.blue * y) / 4,
					                 (resultAc.alpha * (4 - y) + resultBc.alpha * y) / 4 };

				pPixel[y * wordWidth + x] = result;

				resultBc.red += QminusP.red;
				resultBc.green += QminusP.green;
				resultBc.blue += QminusP.blue;
				resultBc.alpha += QminusP.alpha;

				resultAc.red += SminusR.red;
				resultAc.green += SminusR.green;
				resultAc.blue += SminusR.blue;
				resultAc.alpha += SminusR.alpha;
			}

			hP.red += wordWidth;
			hP.green += wordWidth;
			hP.blue += wordWidth;
			hP.alpha += wordWidth;

			hR.red += wordWidth;
			hR.green += wordWidth;
			hR.blue += wordWidth;
			hR.alpha += wordWidth;
		}
	}
	else
	{
		for (uint32_t y = 0; y < wordHeight; ++y)
		{
			Pixel128S resultBc = hP;
			Pixel128S resultAc = hR;

			for (uint32_t x = 0; x < wordWidth; ++x)
			{
				Pixel128S result = { (resultAc.red * (4 - y) + resultBc.red * y) / 4,
					                 (resultAc.green * (4 - y) + resultBc.green * y) / 4,
					                 (resultAc.blue * (4 - y) + resultBc.blue * y) / 4,
					                 (resultAc.alpha * (4 - y) + resultBc.alpha * y) / 4 };

				pPixel[y * wordWidth + x] = result;

				resultBc.red += QminusP.red;
				resultBc.green += QminusP.green;
				resultBc.blue += QminusP.blue;
				resultBc.alpha += QminusP.alpha;

				resultAc.red += SminusR.red;
				resultAc.green += SminusR.green;
				resultAc.blue += SminusR.blue;
				resultAc.alpha += SminusR.alpha;
			}
		}
	}
}

static void unpackModulationValues(const PVRTCWord* word, PVRTCWordIndices indices, int32_t pModulationValues[8][8], uint8_t bpp)
{

	uint32_t wordWidth = 4;
	uint32_t wordHeight = 4;
	if (bpp == 2) { wordWidth = 8; }

	uint32_t modulationData = word->modulationData;

	if ((word->colorData & 0x1) == 0)
	{
		for (uint32_t y = 0; y < wordHeight; y++)
		{
			for (uint32_t x = 0; x < wordWidth; x++)
			{
				pModulationValues[x + indices.P[0]][y + indices.P[1]] = (modulationData & 1) ? 8 : 0;
				modulationData >>= 1;
			}
		}
	}
	else
	{
		if (bpp == 2)
		{
			for (uint32_t y = 0; y < wordHeight; y++)
			{
				for (uint32_t x = 0; x < wordWidth; x++)
				{
					pModulationValues[x + indices.P[0]][y + indices.P[1]] = (modulationData & 1) ? 8 : 0;
					modulationData >>= 1;
				}
			}
		}
		else
		{
			for (uint32_t y = 0; y < wordHeight; y++)
			{
				for (uint32_t x = 0; x < wordWidth; x++)
				{
					int modVal = modulationData & 3;
					switch (modVal)
					{
					case 0: pModulationValues[x + indices.P[0]][y + indices.P[1]] = 0; break;
					case 1: pModulationValues[x + indices.P[0]][y + indices.P[1]] = 3; break;
					case 2: pModulationValues[x + indices.P[0]][y + indices.P[1]] = 5; break;
					case 3: pModulationValues[x + indices.P[0]][y + indices.P[1]] = 8; break;
					}
					modulationData >>= 2;
				}
			}
		}
	}
}

static uint32_t TwiddleUV(uint32_t xSize, uint32_t ySize, uint32_t x, uint32_t y)
{
	uint32_t MinDimension = xSize < ySize ? xSize : ySize;
	uint32_t MaxDimension = xSize > ySize ? xSize : ySize;

	uint32_t TwiddledVal = 0;

	uint32_t SrcBitPos = 1;
	uint32_t DstBitPos = 1;

	for (uint32_t Shift = 0; MinDimension > 1; Shift++)
	{
		if (y & SrcBitPos) { TwiddledVal |= DstBitPos; }
		DstBitPos <<= 1;

		if (x & SrcBitPos) { TwiddledVal |= DstBitPos; }
		DstBitPos <<= 1;

		SrcBitPos <<= 1;

		MinDimension >>= 1;
	}

	if (xSize > ySize)
	{
		TwiddledVal |= (x & ~(MaxDimension - 1)) | ((x & (MaxDimension - 1) & ~(SrcBitPos - 1)) << 1);
	}
	else if (ySize > xSize)
	{
		TwiddledVal |= (y & ~(MaxDimension - 1)) | ((y & (MaxDimension - 1) & ~(SrcBitPos - 1)) << 1);
	}

	return TwiddledVal;
}

uint32_t PVRTDecompressPVRTC(const void* compressedData, uint32_t do2bitMode, uint32_t xDim, uint32_t yDim, uint8_t* outResultImage)
{
	uint32_t wordWidth = 4;
	uint32_t wordHeight = 4;
	uint8_t bpp = 4;
	if (do2bitMode)
	{
		wordWidth = 8;
		bpp = 2;
	}

	const PVRTCWord* PVRTCWords = static_cast<const PVRTCWord*>(compressedData);

	uint32_t numXWords = xDim / wordWidth;
	uint32_t numYWords = yDim / wordHeight;

	Pixel128S interpolatedColors[8][8];
	int32_t modulationValues[8][8];

	for (uint32_t wordY = 0; wordY < numYWords; wordY++)
	{
		for (uint32_t wordX = 0; wordX < numXWords; wordX++)
		{
			PVRTCWordIndices indices;
			indices.P[0] = 0; indices.P[1] = 0;
			indices.Q[0] = wordWidth; indices.Q[1] = 0;
			indices.R[0] = 0; indices.R[1] = wordHeight;
			indices.S[0] = wordWidth; indices.S[1] = wordHeight;

			uint32_t wordIndexP = TwiddleUV(numXWords, numYWords, wordX, wordY);
			uint32_t wordIndexQ = TwiddleUV(numXWords, numYWords, (wordX + 1) % numXWords, wordY);
			uint32_t wordIndexR = TwiddleUV(numXWords, numYWords, wordX, (wordY + 1) % numYWords);
			uint32_t wordIndexS = TwiddleUV(numXWords, numYWords, (wordX + 1) % numXWords, (wordY + 1) % numYWords);

			Pixel32 colorP_A = getColorA(PVRTCWords[wordIndexP].colorData);
			Pixel32 colorP_B = getColorB(PVRTCWords[wordIndexP].colorData);

			Pixel32 colorQ_A = getColorA(PVRTCWords[wordIndexQ].colorData);
			Pixel32 colorQ_B = getColorB(PVRTCWords[wordIndexQ].colorData);

			Pixel32 colorR_A = getColorA(PVRTCWords[wordIndexR].colorData);
			Pixel32 colorR_B = getColorB(PVRTCWords[wordIndexR].colorData);

			Pixel32 colorS_A = getColorA(PVRTCWords[wordIndexS].colorData);
			Pixel32 colorS_B = getColorB(PVRTCWords[wordIndexS].colorData);

			interpolateColors(colorP_A, colorQ_A, colorR_A, colorS_A, &interpolatedColors[0][0], bpp);
			unpackModulationValues(&PVRTCWords[wordIndexP], indices, modulationValues, bpp);

			Pixel128S interpolatedColorsB[8][8];
			interpolateColors(colorP_B, colorQ_B, colorR_B, colorS_B, &interpolatedColorsB[0][0], bpp);

			for (uint32_t y = 0; y < wordHeight; y++)
			{
				for (uint32_t x = 0; x < wordWidth; x++)
				{
					int mod = modulationValues[x][y];
					Pixel128S colorA = interpolatedColors[x][y];
					Pixel128S colorB = interpolatedColorsB[x][y];

					Pixel32 finalColor;
					finalColor.red = static_cast<uint8_t>(((colorA.red * (8 - mod) + colorB.red * mod) / 8) * 255 / 31);
					finalColor.green = static_cast<uint8_t>(((colorA.green * (8 - mod) + colorB.green * mod) / 8) * 255 / 31);
					finalColor.blue = static_cast<uint8_t>(((colorA.blue * (8 - mod) + colorB.blue * mod) / 8) * 255 / 31);
					finalColor.alpha = static_cast<uint8_t>(((colorA.alpha * (8 - mod) + colorB.alpha * mod) / 8) * 255 / 15);

					uint32_t pixelX = wordX * wordWidth + x;
					uint32_t pixelY = wordY * wordHeight + y;
					uint32_t destIdx = (pixelY * xDim + pixelX) * 4;

					outResultImage[destIdx + 0] = finalColor.red;
					outResultImage[destIdx + 1] = finalColor.green;
					outResultImage[destIdx + 2] = finalColor.blue;
					outResultImage[destIdx + 3] = finalColor.alpha;
				}
			}
		}
	}

	return xDim * yDim * 4;
}

uint32_t PVRTDecompressDXT(const void* srcData, uint32_t width, uint32_t height, uint8_t* dstData, uint32_t format) {
    std::memset(dstData, 255, width * height * 4);
    return width * height * 4;
}

uint32_t PVRTDecompressETC(const void* srcData, uint32_t width, uint32_t height, uint8_t* dstData, uint32_t format) {
    std::memset(dstData, 255, width * height * 4);
    return width * height * 4;
}

bool PVRTDecodeUncompressed(const void* srcData, uint32_t width, uint32_t height,
                            char c0, char c1, char c2, char c3,
                            uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
                            uint8_t* dstData) {
    std::memset(dstData, 255, width * height * 4);
    return true;
}

int ParsePVRv3Format(uint64_t pixel_format, uint32_t& gl_format, uint32_t& gl_type, int& bpp,
                     char& c0, char& c1, char& c2, char& c3,
                     uint8_t& d0, uint8_t& d1, uint8_t& d2, uint8_t& d3) {
    bpp = 32;
    return 10; // Uncompressed/fallback
}

int ParsePVRv2Format(uint32_t flags, uint32_t& gl_format, uint32_t& gl_type, int& bpp,
                     char& c0, char& c1, char& c2, char& c3,
                     uint8_t& d0, uint8_t& d1, uint8_t& d2, uint8_t& d3) {
    bpp = 32;
    return 10;
}

} // namespace pvr
} // namespace caver
