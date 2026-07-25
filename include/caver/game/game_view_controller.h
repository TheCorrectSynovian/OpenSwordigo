#ifndef CAVER_GAME_VIEW_CONTROLLER_H
#define CAVER_GAME_VIEW_CONTROLLER_H

#include <caver/gui/gui_view.h>
#include <caver/scene/scene.h>
#include <memory>
#include <string>

namespace caver {

class GameViewController : public GUIView {
public:
    GameViewController() = default;

    void initGame(const std::string& sceneName);
    void update(float dt) override;
    void render(RenderingContext& ctx) override;

    Scene& getScene() { return gameScene_; }
    const Vector2& getPlayerPos() const { return playerPos_; }
    void setPlayerPos(const Vector2& pos) { playerPos_ = pos; }

private:
    Scene gameScene_;
    Vector2 playerPos_{3535.16f, 407.5f};
    float playerSpeed_{300.0f};
};

} // namespace caver

#endif // CAVER_GAME_VIEW_CONTROLLER_H
