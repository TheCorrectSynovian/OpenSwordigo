#ifndef CAVER_PVR_LOADER_H
#define CAVER_PVR_LOADER_H

#include <string>
#include <vector>
#include <cstdint>

namespace caver {

struct TextureData {
    int width{0};
    int height{0};
    std::vector<uint8_t> rgbaData;
    uint32_t glTextureId{0};
};

class PVRTextureLoader {
public:
    static TextureData loadTexture(const std::string& filename);
    static bool decodePVRToRGBA(const std::vector<uint8_t>& fileBuffer, TextureData& outTexture);
};

} // namespace caver

#endif // CAVER_PVR_LOADER_H
