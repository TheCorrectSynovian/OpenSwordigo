#ifndef CAVER_APP_RUNTIME_H
#define CAVER_APP_RUNTIME_H

#include <caver/graphics/rendering_context.h>
#include <caver/gui/gui_navigation_controller.h>
#include <caver/gui/main_menu_view_controller.h>
#include <caver/resource/vfs.h>
#include <memory>
#include <string>

namespace caver {

class AppRuntime {
public:
    static AppRuntime& instance();

    bool initEngine(int windowWidth, int windowHeight);
    void update(float dt);
    void render();

    void handleMouseInput(float x, float y, bool isClick);

    void shutdown();

private:
    AppRuntime() = default;
    bool initialized_{false};
    std::shared_ptr<MainMenuViewController> mainMenuVC_;
};

} // namespace caver

#endif // CAVER_APP_RUNTIME_H
