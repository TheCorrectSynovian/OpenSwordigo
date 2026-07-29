#include "caver/engine/app_runtime.h"
#include "caver/resource/texture_library.h"
#include "caver/game/game_view_controller.h"
#include <iostream>

namespace caver {

AppRuntime& AppRuntime::instance() {
    static AppRuntime instance;
    return instance;
}

bool AppRuntime::initEngine(int windowWidth, int windowHeight, const std::string& sceneName) {
    if (initialized_) return true;

    std::cout << "[AppRuntime] Initializing OpenSwordigo Engine Subsystems..." << std::endl;
    VFS::instance().initDefaultPaths();
    RenderingContext::instance().initGL(windowWidth, windowHeight);

    // Preload UI Atlases
    TextureLibrary::sharedLibrary().loadAtlas("ui_game_atlas_2x.atlas");
    TextureLibrary::sharedLibrary().loadAtlas("ui_game2_atlas_2x.atlas");
    TextureLibrary::sharedLibrary().loadAtlas("ui_game_atlas_2x.atlas");

    std::string targetScene = sceneName.empty() ? "town_part1.scene" : sceneName;

    // Boot directly into GameViewController for testing
    auto gameVC = std::make_shared<GameViewController>();
    gameVC->setFrame(Vector2(windowWidth / 2.0f, windowHeight / 2.0f), Vector2(windowWidth, windowHeight));
    gameVC->initGame(targetScene);
    GUINavigationController::instance().pushViewController(gameVC);

    initialized_ = true;
    return true;
}

void AppRuntime::update(float dt) {
    if (!initialized_) return;
    GUINavigationController::instance().update(dt);
}

void AppRuntime::render() {
    if (!initialized_) return;
    RenderingContext::instance().beginFrame();
    GUINavigationController::instance().render(RenderingContext::instance());
    RenderingContext::instance().endFrame();
}

void AppRuntime::handleMouseInput(float x, float y, bool isClick) {
    if (!initialized_) return;
    GUINavigationController::instance().handleInput(Vector2(x, y), isClick);
}

void AppRuntime::shutdown() {
    std::cout << "[AppRuntime] Shutting down OpenSwordigo Engine Subsystems." << std::endl;
    initialized_ = false;
}

} // namespace caver
