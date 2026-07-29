#include "caver/resource/texture_library.h"
#include "caver/resource/vfs.h"
#include <sstream>

namespace caver {

TextureLibrary& TextureLibrary::sharedLibrary() {
    static TextureLibrary instance;
    return instance;
}

uint32_t TextureLibrary::textureForName(const std::string& name) {
    if (name.empty()) return 0;

    auto it = cache_.find(name);
    if (it != cache_.end()) {
        return it->second;
    }

    uint32_t texID = RenderingContext::instance().getTexture(name);
    if (texID != 0) {
        cache_[name] = texID;
    }
    return texID;
}

std::optional<AtlasRegion> TextureLibrary::getAtlasRegion(const std::string& regionName) {
    auto it = atlasRegions_.find(regionName);
    if (it != atlasRegions_.end()) {
        return it->second;
    }
    return std::nullopt;
}

void TextureLibrary::loadAtlas(const std::string& atlasFileName) {
    auto textOpt = VFS::instance().readTextFile(atlasFileName);
    if (!textOpt) return;

    std::stringstream ss(*textOpt);
    std::string line;
    std::string pageTextureName;
    int texW = 1024, texH = 1024;

    std::string currentSpriteName;
    AtlasRegion region;

    while (std::getline(ss, line)) {
        if (line.empty()) continue;

        if (line.find(".png") != std::string::npos || line.find(".pvr") != std::string::npos) {
            pageTextureName = line;
            continue;
        }

        if (line.find("size: ") == 0) {
            sscanf(line.c_str(), "size: %d, %d", &texW, &texH);
            continue;
        }

        if (line.find("  bounds: ") == 0 || line.find("  xy: ") == 0) {
            int x = 0, y = 0, w = 0, h = 0;
            if (line.find("  bounds: ") == 0) {
                sscanf(line.c_str(), "  bounds: %d, %d, %d, %d", &x, &y, &w, &h);
            } else {
                sscanf(line.c_str(), "  xy: %d, %d", &x, &y);
                std::string sizeLine;
                if (std::getline(ss, sizeLine)) {
                    sscanf(sizeLine.c_str(), "  size: %d, %d", &w, &h);
                }
            }
            if (!currentSpriteName.empty()) {
                region.atlasTextureName = pageTextureName;
                region.uMin = static_cast<float>(x) / static_cast<float>(texW);
                region.vMin = static_cast<float>(y) / static_cast<float>(texH);
                region.uMax = static_cast<float>(x + w) / static_cast<float>(texW);
                region.vMax = static_cast<float>(y + h) / static_cast<float>(texH);
                region.width = w;
                region.height = h;
                atlasRegions_[currentSpriteName] = region;
            }
        } else if (line.find("  ") != 0) {
            currentSpriteName = line;
        }
    }
}

void TextureLibrary::clearCache() {
    cache_.clear();
    atlasRegions_.clear();
}

} // namespace caver
