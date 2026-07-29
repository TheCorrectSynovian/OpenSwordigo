#pragma once
#include "caver/math/caver_math.h"
#include "caver/graphics/font.h"
#include "caver/graphics/rendering_context.h"
#include <string>

namespace caver {

class GUILabel {
public:
    GUILabel() = default;

    void setText(const std::string& text);
    void setPosition(const Vector2& pos);
    void setScale(float scale);
    void setColor(const FloatColor& color);
    
    void updateText(); // Calculates size and builds mesh if necessary
    void draw(RenderingContext& ctx);

private:
    std::string text_;
    Vector2 position_;
    float scale_{1.0f};
    FloatColor color_{1.0f, 1.0f, 1.0f, 1.0f};
    bool dirty_{true};
};

} // namespace caver
