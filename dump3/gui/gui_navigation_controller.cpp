#include "caver/gui/gui_navigation_controller.h"

namespace caver {

GUINavigationController& GUINavigationController::instance() {
    static GUINavigationController instance;
    return instance;
}

void GUINavigationController::pushViewController(std::shared_ptr<GUIView> controller) {
    if (controller) {
        stack_.push_back(controller);
    }
}

void GUINavigationController::popViewController() {
    if (!stack_.empty()) {
        stack_.pop_back();
    }
}

std::shared_ptr<GUIView> GUINavigationController::topViewController() {
    if (stack_.empty()) return nullptr;
    return stack_.back();
}

void GUINavigationController::update(float dt) {
    auto top = topViewController();
    if (top) {
        top->update(dt);
    }
}

void GUINavigationController::render(RenderingContext& ctx) {
    auto top = topViewController();
    if (top) {
        top->render(ctx);
    }
}

bool GUINavigationController::handleInput(const Vector2& mousePos, bool isClick) {
    auto top = topViewController();
    if (top) {
        return top->handleInput(mousePos, isClick);
    }
    return false;
}

} // namespace caver
