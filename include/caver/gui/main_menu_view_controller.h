#ifndef CAVER_MAIN_MENU_VIEW_CONTROLLER_H
#define CAVER_MAIN_MENU_VIEW_CONTROLLER_H

#include <caver/gui/gui_view.h>
#include <caver/gui/gui_button.h>
#include <caver/gui/gui_frame_view.h>
#include <caver/scene/scene.h>
#include <memory>

namespace caver {

class MainMenuViewController : public GUIView {
public:
    MainMenuViewController();

    void initView(int screenWidth, int screenHeight);
    void update(float dt) override;
    void render(RenderingContext& ctx) override;

private:
    Scene menuScene_;
    std::shared_ptr<GUIFrameView> titleBanner_;
    std::shared_ptr<GUIButton> playButton_;
    std::shared_ptr<GUIButton> settingsButton_;
};

} // namespace caver

#endif // CAVER_MAIN_MENU_VIEW_CONTROLLER_H
