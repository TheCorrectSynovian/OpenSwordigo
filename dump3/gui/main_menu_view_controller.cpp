#include "caver/gui/main_menu_view_controller.h"
#include "caver/gui/gui_navigation_controller.h"
#include "caver/game/game_view_controller.h"
#include <iostream>

namespace caver {

MainMenuViewController::MainMenuViewController() {
    menuScene_.loadFromFile("menu.scene");
}

void MainMenuViewController::initView(int screenWidth, int screenHeight) {
    float rightX = screenWidth - 180.0f;
    float buttonW = 280.0f;
    float buttonH = 65.0f;

    // 1. Swordigo Title Logo ("swordigo_title_2x.pvr") at Top-Left
    titleBanner_ = std::make_shared<GUIFrameView>();
    titleBanner_->setTextureName("swordigo_title_2x.pvr");
    titleBanner_->setFrame(Vector2(220.0f, screenHeight - 110.0f), Vector2(380.0f, 150.0f));
    addSubView(titleBanner_);

    // 2. Start Button ("button_taptoenter_2x.pvr" / "ui_game2_atlas_2x.tex.png")
    playButton_ = std::make_shared<GUIButton>();
    playButton_->setTextureName("button_taptoenter_2x.pvr");
    playButton_->setFrame(Vector2(rightX, screenHeight * 0.78f), Vector2(buttonW, buttonH));
    playButton_->setOnClickListener([]() {
        std::cout << "[MainMenu] Start clicked! Loading GameViewController..." << std::endl;
        auto gameVC = std::make_shared<GameViewController>();
        gameVC->initGame("town_herohouse.scene");
        GUINavigationController::instance().pushViewController(gameVC);
    });
    addSubView(playButton_);

    // 3. Achievements Button
    auto achiButton = std::make_shared<GUIButton>();
    achiButton->setTextureName("button_taptobrowse_2x.pvr");
    achiButton->setFrame(Vector2(rightX, screenHeight * 0.58f), Vector2(buttonW, buttonH));
    addSubView(achiButton);

    // 4. Options Button
    settingsButton_ = std::make_shared<GUIButton>();
    settingsButton_->setTextureName("button_taptobrowse_2x.pvr");
    settingsButton_->setFrame(Vector2(rightX, screenHeight * 0.38f), Vector2(buttonW, buttonH));
    addSubView(settingsButton_);

    // 5. Credits Button
    auto creditsButton = std::make_shared<GUIButton>();
    creditsButton->setTextureName("button_taptobrowse_2x.pvr");
    creditsButton->setFrame(Vector2(rightX, screenHeight * 0.18f), Vector2(buttonW, buttonH));
    addSubView(creditsButton);
}

void MainMenuViewController::update(float dt) {
    menuScene_.update(dt);
    GUIView::update(dt);
}

void MainMenuViewController::render(RenderingContext& ctx) {
    // 1. Render 3D menu scene background
    menuScene_.render(ctx);

    // 2. Render GUI overlay (title banner + play button)
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDepthMask(GL_FALSE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    // Restore neutral lighting for UI
    glUniform3f(glGetUniformLocation(ctx.getShader().getProgramId(), "uAmbientLight"), 1.0f, 1.0f, 1.0f);
    glUniform3f(glGetUniformLocation(ctx.getShader().getProgramId(), "uLightDir"), 0.0f, 0.0f, 1.0f);
    
    GUIView::render(ctx);
    
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
}

} // namespace caver
