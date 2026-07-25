#include "caver/game/game_view_controller.h"
#include <iostream>

namespace caver {

void GameViewController::initGame(const std::string& sceneName) {
    std::cout << "[GameViewController] Loading gameplay scene '" << sceneName << "'..." << std::endl;
    gameScene_.loadFromFile(sceneName);
    playerPos_ = Vector2(3535.16f, 407.5f);
}

void GameViewController::update(float dt) {
    gameScene_.update(dt);
    GUIView::update(dt);
}

void GameViewController::render(RenderingContext& ctx) {
    // Center camera on player position
    ctx.setCamera(playerPos_, 1.0f);

    // Render 3D gameplay scene
    gameScene_.render(ctx);

    // Render HUD overlay
    GUIView::render(ctx);
}

} // namespace caver
