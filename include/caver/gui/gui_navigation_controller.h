#ifndef CAVER_GUI_NAVIGATION_CONTROLLER_H
#define CAVER_GUI_NAVIGATION_CONTROLLER_H

#include <caver/gui/gui_view.h>
#include <vector>
#include <memory>

namespace caver {

class GUINavigationController {
public:
    static GUINavigationController& instance();

    void pushViewController(std::shared_ptr<GUIView> controller);
    void popViewController();
    std::shared_ptr<GUIView> topViewController();

    void update(float dt);
    void render(RenderingContext& ctx);
    bool handleInput(const Vector2& mousePos, bool isClick);

private:
    GUINavigationController() = default;
    std::vector<std::shared_ptr<GUIView>> stack_;
};

} // namespace caver

#endif // CAVER_GUI_NAVIGATION_CONTROLLER_H
