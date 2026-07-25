#ifndef CAVER_TEXTURE_LIBRARY_H
#define CAVER_TEXTURE_LIBRARY_H

#include <caver/graphics/rendering_context.h>
#include <string>
#include <unordered_map>
#include <memory>
#include <optional>

namespace caver {

struct AtlasRegion {
    std::string atlasTextureName;
    float uMin{0.0f}, vMin{0.0f}, uMax{1.0f}, vMax{1.0f};
    int width{0}, height{0};
};

class TextureLibrary {
public:
    static TextureLibrary& sharedLibrary();

    uint32_t textureForName(const std::string& name);
    std::optional<AtlasRegion> getAtlasRegion(const std::string& regionName);
    void loadAtlas(const std::string& atlasFileName);
    void clearCache();

private:
    TextureLibrary() = default;
    std::unordered_map<std::string, uint32_t> cache_;
    std::unordered_map<std::string, AtlasRegion> atlasRegions_;
};

} // namespace caver

#endif // CAVER_TEXTURE_LIBRARY_H
