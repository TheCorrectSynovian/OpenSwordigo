#ifndef CAVER_FONT_H
#define CAVER_FONT_H

#include <string>
#include <unordered_map>
#include <memory>
#include "caver/math/caver_math.h"
#include "caver/graphics/rendering_context.h"

namespace caver {

struct FontChar {
    int id{0};
    float x{0}, y{0}, width{0}, height{0};
    float xoffset{0}, yoffset{0}, xadvance{0};
};

class Font {
public:
    static Font& defaultFont();

    bool loadFnt(const std::string& fntFilename, const std::string& texFilename);
    void renderText(RenderingContext& ctx, const std::string& text, const Vector2& pos, float scale = 1.0f, const FloatColor& color = FloatColor(1, 1, 1, 1));
    Vector2 getTextSize(const std::string& text, float scale = 1.0f) const;

private:
    std::string texName_;
    uint32_t texId_{0};
    int texWidth_{512};
    int texHeight_{512};
    std::unordered_map<int, FontChar> chars_;
    bool loaded_{false};
};

} // namespace caver

#endif // CAVER_FONT_H
