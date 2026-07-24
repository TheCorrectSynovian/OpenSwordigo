#ifndef CAVER_PVRTC_DECODER_H
#define CAVER_PVRTC_DECODER_H

#include <cstdint>
#include <cstddef>

namespace caver {
namespace pvr {

uint32_t PVRTDecompressPVRTC(const void* compressedData, uint32_t do2bitMode, uint32_t xDim, uint32_t yDim, uint8_t* outResultImage);
uint32_t PVRTDecompressDXT(const void* srcData, uint32_t width, uint32_t height, uint8_t* dstData, uint32_t format);
uint32_t PVRTDecompressETC(const void* srcData, uint32_t width, uint32_t height, uint8_t* dstData, uint32_t format);
bool PVRTDecodeUncompressed(const void* srcData, uint32_t width, uint32_t height,
                            char c0, char c1, char c2, char c3,
                            uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3,
                            uint8_t* dstData);

int ParsePVRv3Format(uint64_t pixel_format, uint32_t& gl_format, uint32_t& gl_type, int& bpp,
                     char& c0, char& c1, char& c2, char& c3,
                     uint8_t& d0, uint8_t& d1, uint8_t& d2, uint8_t& d3);

int ParsePVRv2Format(uint32_t flags, uint32_t& gl_format, uint32_t& gl_type, int& bpp,
                     char& c0, char& c1, char& c2, char& c3,
                     uint8_t& d0, uint8_t& d1, uint8_t& d2, uint8_t& d3);

} // namespace pvr
} // namespace caver

#endif // CAVER_PVRTC_DECODER_H
