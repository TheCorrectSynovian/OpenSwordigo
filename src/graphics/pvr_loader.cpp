#include "caver/graphics/pvr_loader.h"
#include "caver/graphics/pvrtc_decoder.h"
#include "caver/graphics/gl_inc.h"
#include "caver/resource/vfs.h"
#include <iostream>
#include <cstring>
#include <SDL3/SDL_opengl.h>

namespace caver {

/* ETC1 Decoder helper */
static inline int etc1_clamp(int v) { return v < 0 ? 0 : (v > 255 ? 255 : v); }

static const int etc1_modifiers[8][2] = {
    {  2,   8}, {  5,  17}, {  9,  29}, { 13,  42},
    { 18,  56}, { 24,  71}, { 33,  92}, { 47, 127}
};

static void decode_etc1_block(const uint8_t* src, uint8_t* dst, int dst_stride) {
    uint64_t block = 0;
    for (int i = 0; i < 8; i++)
        block = (block << 8) | src[i];

    int diff  = (block >> 33) & 1;
    int flip  = (block >> 32) & 1;
    int table1 = (block >> 37) & 7;
    int table2 = (block >> 34) & 7;

    int r1, g1, b1, r2, g2, b2;

    if (diff == 0) {
        int rr1 = (block >> 60) & 0xF; r1 = (rr1 << 4) | rr1;
        int rr2 = (block >> 56) & 0xF; r2 = (rr2 << 4) | rr2;
        int gg1 = (block >> 52) & 0xF; g1 = (gg1 << 4) | gg1;
        int gg2 = (block >> 48) & 0xF; g2 = (gg2 << 4) | gg2;
        int bb1 = (block >> 44) & 0xF; b1 = (bb1 << 4) | bb1;
        int bb2 = (block >> 40) & 0xF; b2 = (bb2 << 4) | bb2;
    } else {
        int r = (block >> 59) & 0x1F;
        int dr = (block >> 56) & 0x7; if (dr > 3) dr -= 8;
        int g = (block >> 51) & 0x1F;
        int dg = (block >> 48) & 0x7; if (dg > 3) dg -= 8;
        int b = (block >> 43) & 0x1F;
        int db = (block >> 40) & 0x7; if (db > 3) db -= 8;

        r1 = (r << 3) | (r >> 2);
        int r2v = r + dr; r2 = (r2v << 3) | (r2v >> 2);
        g1 = (g << 3) | (g >> 2);
        int g2v = g + dg; g2 = (g2v << 3) | (g2v >> 2);
        b1 = (b << 3) | (b >> 2);
        int b2v = b + db; b2 = (b2v << 3) | (b2v >> 2);
    }

    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 4; row++) {
            int pixel_idx = col * 4 + row;
            int msb = (block >> (pixel_idx + 16)) & 1;
            int lsb = (block >> pixel_idx) & 1;

            int sub = (flip == 0) ? ((col >= 2) ? 1 : 0) : ((row >= 2) ? 1 : 0);
            int table = (sub == 0) ? table1 : table2;
            int mod_idx = (msb << 1) | lsb;

            int sign = (mod_idx & 2) ? -1 : 1;
            int modVal = etc1_modifiers[table][mod_idx & 1] * sign;

            int baseR = (sub == 0) ? r1 : r2;
            int baseG = (sub == 0) ? g1 : g2;
            int baseB = (sub == 0) ? b1 : b2;

            uint8_t* pixel = dst + (row * dst_stride + col * 4);
            pixel[0] = etc1_clamp(baseR + modVal);
            pixel[1] = etc1_clamp(baseG + modVal);
            pixel[2] = etc1_clamp(baseB + modVal);
            pixel[3] = 255;
        }
    }
}

static bool decode_etc1(const uint8_t* src, int w, int h, uint8_t* dst) {
    int blocks_x = w / 4;
    int blocks_y = h / 4;
    int dst_stride = w * 4;

    for (int by = 0; by < blocks_y; by++) {
        for (int bx = 0; bx < blocks_x; bx++) {
            const uint8_t* block_src = src + (by * blocks_x + bx) * 8;
            uint8_t* block_dst = dst + (by * 4 * dst_stride + bx * 4 * 4);
            decode_etc1_block(block_src, block_dst, dst_stride);
        }
    }
    return true;
}

bool PVRTextureLoader::decodePVRToRGBA(const std::vector<uint8_t>& fileBuffer, TextureData& outTexture) {
    if (fileBuffer.size() < 44) return false;

    uint32_t magic3 = 0;
    std::memcpy(&magic3, fileBuffer.data(), 4);

    if (magic3 == 0x03525650) { // "PVR\3"
        if (fileBuffer.size() < 52) return false;
        uint64_t pixelFormat = 0;
        std::memcpy(&pixelFormat, fileBuffer.data() + 8, 8);
        uint32_t height = 0, width = 0;
        std::memcpy(&height, fileBuffer.data() + 24, 4);
        std::memcpy(&width, fileBuffer.data() + 28, 4);
        uint32_t metadataSize = 0;
        std::memcpy(&metadataSize, fileBuffer.data() + 48, 4);

        outTexture.width = width;
        outTexture.height = height;
        outTexture.rgbaData.resize(width * height * 4);

        const uint8_t* pixelData = fileBuffer.data() + 52 + metadataSize;
        if (pixelFormat == 6) { // ETC1
            return decode_etc1(pixelData, width, height, outTexture.rgbaData.data());
        } else if (pixelFormat == 0 || pixelFormat == 1) { // PVRTC 2bpp / 4bpp
            pvr::PVRTDecompressPVRTC(pixelData, pixelFormat == 0 ? 1 : 0, width, height, outTexture.rgbaData.data());
            return true;
        }
    } else {
        // PVR v2 header check
        uint32_t headerSize = 0, height = 0, width = 0, flags = 0, pvrMagic = 0;
        std::memcpy(&headerSize, fileBuffer.data(), 4);
        std::memcpy(&height, fileBuffer.data() + 4, 4);
        std::memcpy(&width, fileBuffer.data() + 8, 4);
        std::memcpy(&flags, fileBuffer.data() + 16, 4);
        std::memcpy(&pvrMagic, fileBuffer.data() + 44 - 16, 4); // "PVR!" at byte 28

        if (headerSize == 44) {
            outTexture.width = width;
            outTexture.height = height;
            outTexture.rgbaData.resize(width * height * 4);
            const uint8_t* pixelData = fileBuffer.data() + 44;

            uint32_t formatMask = flags & 0xFF;
            if (formatMask == 0x36 || formatMask == 6) { // ETC1
                return decode_etc1(pixelData, width, height, outTexture.rgbaData.data());
            } else if (formatMask == 12 || formatMask == 24 || formatMask == 0 || formatMask == 1) { // PVRTC
                pvr::PVRTDecompressPVRTC(pixelData, (formatMask == 12 || formatMask == 0) ? 1 : 0, width, height, outTexture.rgbaData.data());
                return true;
            }
        }
    }

    // Fallback: fill with checkerboard/magenta texture
    outTexture.width = 128;
    outTexture.height = 128;
    outTexture.rgbaData.resize(128 * 128 * 4);
    for (int y = 0; y < 128; ++y) {
        for (int x = 0; x < 128; ++x) {
            bool c = ((x / 16) + (y / 16)) % 2 == 0;
            size_t idx = (y * 128 + x) * 4;
            outTexture.rgbaData[idx + 0] = c ? 255 : 200;
            outTexture.rgbaData[idx + 1] = c ? 0 : 50;
            outTexture.rgbaData[idx + 2] = c ? 255 : 200;
            outTexture.rgbaData[idx + 3] = 255;
        }
    }
    return true;
}

TextureData PVRTextureLoader::loadTexture(const std::string& filename) {
    TextureData tex;
    auto data = VFS::instance().readFile(filename);
    if (!data) {
        data = VFS::instance().readFile(filename + ".pvr");
    }
    if (!data) {
        data = VFS::instance().readFile(filename + "_2x.pvr");
    }

    if (!data) {
        std::cerr << "[PVRTextureLoader] Warning: Could not read texture file '" << filename << "'" << std::endl;
        return tex;
    }

    if (!decodePVRToRGBA(*data, tex)) {
        std::cerr << "[PVRTextureLoader] Warning: Failed decoding PVR texture '" << filename << "'" << std::endl;
        return tex;
    }

    // Upload to OpenGL
    glGenTextures(1, &tex.glTextureId);
    glBindTexture(GL_TEXTURE_2D, tex.glTextureId);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, tex.width, tex.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, tex.rgbaData.data());

    std::cout << "[PVRTextureLoader] Successfully loaded & uploaded texture '" << filename 
              << "' (" << tex.width << "x" << tex.height << ") -> GL Tex #" << tex.glTextureId << std::endl;

    return tex;
}

} // namespace caver
