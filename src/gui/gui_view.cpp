#include "caver/gui/gui_view.h"

namespace caver {

bool GUIView::handleInput(const Vector2& mousePos, bool isClick) {
    if (!visible_) return false;

    // Check children in reverse z-order
    for (auto it = children_.rbegin(); it != children_.rend(); ++it) {
        if ((*it)->handleInput(mousePos, isClick)) {
            return true;
        }
    }

    return false;
}

void GUIView::update(float dt) {
    if (!visible_) return;
    for (auto& child : children_) {
        child->update(dt);
    }
}

void GUIView::render(RenderingContext& ctx) {
    if (!visible_) return;
    for (auto& child : children_) {
        child->render(ctx);
    }
}

} // namespace caver
