#include "caver/gui/gui_button.h"
#include <iostream>

namespace caver {

bool GUIButton::handleInput(const Vector2& mousePos, bool isClick) {
    if (!visible_) return false;

    float minX = position_.x - size_.x * 0.5f;
    float maxX = position_.x + size_.x * 0.5f;
    float minY = position_.y - size_.y * 0.5f;
    float maxY = position_.y + size_.y * 0.5f;

    bool contains = (mousePos.x >= minX && mousePos.x <= maxX &&
                     mousePos.y >= minY && mousePos.y <= maxY);

    hovered_ = contains;

    if (contains && isClick) {
        std::cout << "[GUIButton] Button Clicked at (" << mousePos.x << ", " << mousePos.y << ")" << std::endl;
        if (onClickListener_) {
            onClickListener_();
        }
        return true;
    }

    return GUIFrameView::handleInput(mousePos, isClick);
}

} // namespace caver
