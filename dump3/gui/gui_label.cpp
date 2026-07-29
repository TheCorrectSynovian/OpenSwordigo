#include "caver/gui/gui_label.h"

namespace caver {

void GUILabel::setText(const std::string& text) {
    text_ = text;
    dirty_ = true;
}

void GUILabel::setPosition(const Vector2& pos) {
    position_ = pos;
}

void GUILabel::setScale(float scale) {
    scale_ = scale;
}

void GUILabel::setColor(const FloatColor& color) {
    color_ = color;
}

void GUILabel::updateText() {
    dirty_ = false;
}

void GUILabel::draw(RenderingContext& ctx) {
    if (text_.empty()) return;
    Font::defaultFont().renderText(ctx, text_, position_, scale_, color_);
}

} // namespace caver
