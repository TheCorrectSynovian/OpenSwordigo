#include "caver/game/game_view_controller.h"
#include "caver/graphics/pod_loader.h"
#include "caver/gui/gui_label.h"
#include "caver/resource/texture_library.h"
#include "caver/graphics/gl_inc.h"
#include <iostream>

namespace caver {

void GameViewController::initGame(const std::string& sceneName) {
    std::string targetScene = sceneName.empty() ? "town_part1.scene" : sceneName;
    gameScene_.loadFromFile(targetScene);
    playerPos_ = Vector2(0.0f, -35.0f); // Center camera on portal/town reference focus
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

    // GUI hidden per user directive
    // renderHUD(ctx);

    GUIView::render(ctx);
}

void GameViewController::renderHUD(RenderingContext& ctx) {
    int w = 1920;
    int h = 1080;

    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_FALSE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Helper lambda to draw 2D screen quad
    auto draw2DQuad = [&](float x, float y, float width, float height, const FloatColor& color, const std::string& texName = "") {
        float x1 = (x / (float)w) * 2.0f - 1.0f;
        float y1 = (y / (float)h) * 2.0f - 1.0f;
        float x2 = ((x + width) / (float)w) * 2.0f - 1.0f;
        float y2 = ((y + height) / (float)h) * 2.0f - 1.0f;

        Matrix4 identity;
        ctx.getShader().setMVP(identity);
        ctx.getShader().setColor(color);

        if (!texName.empty()) {
            uint32_t texId = ctx.getTexture(texName);
            if (texId > 0) {
                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, texId);
                ctx.getShader().setUseTexture(true);
            } else {
                ctx.getShader().setUseTexture(false);
            }
        } else {
            ctx.getShader().setUseTexture(false);
        }

        static std::shared_ptr<Mesh> quadMesh;
        if (!quadMesh) {
            quadMesh = std::make_shared<Mesh>();
        }

        std::vector<Vertex> verts = {
            {{x1, y1, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}},
            {{x2, y1, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
            {{x2, y2, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
            {{x1, y2, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}}
        };
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
        quadMesh->uploadGLBuffers(verts, indices);
        quadMesh->draw();
    };

    auto drawAtlasRegion = [&](float x, float y, float width, float height, const std::string& regionName, FloatColor color = FloatColor(1, 1, 1, 1)) {
        auto regOpt = TextureLibrary::sharedLibrary().getAtlasRegion(regionName);
        if (!regOpt.has_value()) {
            draw2DQuad(x, y, w, h, color, "gold128.png");
            return;
        }
        const auto& reg = regOpt.value();
        GLuint tex = ctx.getTexture(reg.atlasTextureName);
        if (tex == 0) {
            tex = ctx.getTexture("ui_game_atlas_2x.tex.png");
        }
        if (tex > 0) {
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, tex);
            ctx.getShader().setUseTexture(true);
            ctx.getShader().setColor(color);
        } else {
            ctx.getShader().setUseTexture(false);
            ctx.getShader().setColor(color);
        }

        float x1 = (x / (float)w) * 2.0f - 1.0f;
        float y1 = (y / (float)h) * 2.0f - 1.0f;
        float x2 = ((x + width) / (float)w) * 2.0f - 1.0f;
        float y2 = ((y + height) / (float)h) * 2.0f - 1.0f;

        Matrix4 identity;
        ctx.getShader().setMVP(identity);

        Mesh quad;
        Vertex v0{{x1, y1, 0.0f}, {0, 0, 1}, Vector2(reg.uMin, reg.vMin)};
        Vertex v1{{x2, y1, 0.0f}, {0, 0, 1}, Vector2(reg.uMax, reg.vMin)};
        Vertex v2{{x2, y2, 0.0f}, {0, 0, 1}, Vector2(reg.uMax, reg.vMax)};
        Vertex v3{{x1, y2, 0.0f}, {0, 0, 1}, Vector2(reg.uMin, reg.vMax)};
        std::vector<Vertex> verts = {v0, v1, v2, v3};
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
        quad.uploadGLBuffers(verts, indices);
        quad.draw();
    };

    // 1. Top-Left: Map Scroll Icon & Gem Counter
    draw2DQuad(30, h - 110, 80, 80, FloatColor(1, 1, 1, 1), "gold128.png");

    static GUILabel gemLabel;
    gemLabel.setText("x 32");
    gemLabel.setPosition(Vector2(95, h - 165));
    gemLabel.setScale(1.5f);
    gemLabel.setColor(FloatColor(1.0f, 0.95f, 0.8f, 1.0f));
    gemLabel.updateText();
    gemLabel.draw(ctx);

    // 2. Top-Center: Hearts (2.5 Hearts matching reference image)
    float heartCenterX = w / 2.0f - 75.0f;
    float heartY = h - 70.0f;
    draw2DQuad(heartCenterX,       heartY, 44, 44, FloatColor(1.0f, 0.15f, 0.15f, 1.0f), "brightredfabric.png");
    draw2DQuad(heartCenterX + 50,  heartY, 44, 44, FloatColor(1.0f, 0.15f, 0.15f, 1.0f), "brightredfabric.png");
    draw2DQuad(heartCenterX + 100, heartY, 44, 44, FloatColor(0.2f, 0.4f, 0.8f, 0.5f), "black128.png");

    // 3. Top-Right: Mana Bar + Spell Emblem
    float manaX = w - 260.0f;
    float manaY = h - 60.0f;
    draw2DQuad(manaX, manaY, 220, 30, FloatColor(0.1f, 0.15f, 0.3f, 0.8f), "black128.png");
    draw2DQuad(manaX + 4, manaY + 4, 160, 22, FloatColor(0.1f, 0.5f, 0.95f, 1.0f), "brightredfabric.png");
    draw2DQuad(manaX + 180, manaY - 8, 48, 48, FloatColor(1.0f, 0.75f, 0.2f, 1.0f), "gold128.png");

    // 4. Portal Center: "Tap to Enter" Interaction Bubble
    float bubbleX = w / 2.0f - 190.0f;
    float bubbleY = h / 2.0f + 60.0f;
    // Black outer ring
    draw2DQuad(bubbleX - 3, bubbleY - 3, 136, 136, FloatColor(0.0f, 0.0f, 0.0f, 1.0f), "black128.png");
    // White inner bubble
    draw2DQuad(bubbleX, bubbleY, 130, 130, FloatColor(1.0f, 1.0f, 1.0f, 1.0f), "white128.png");

    static GUILabel tapLabel1;
    tapLabel1.setText("Tap");
    tapLabel1.setPosition(Vector2(bubbleX + 32, bubbleY + 75));
    tapLabel1.setScale(1.4f);
    tapLabel1.setColor(FloatColor(0.0f, 0.0f, 0.0f, 1.0f));
    tapLabel1.updateText();
    tapLabel1.draw(ctx);

    static GUILabel tapLabel2;
    tapLabel2.setText("to");
    tapLabel2.setPosition(Vector2(bubbleX + 45, bubbleY + 48));
    tapLabel2.setScale(1.2f);
    tapLabel2.setColor(FloatColor(0.0f, 0.0f, 0.0f, 1.0f));
    tapLabel2.updateText();
    tapLabel2.draw(ctx);

    static GUILabel tapLabel3;
    tapLabel3.setText("Enter");
    tapLabel3.setPosition(Vector2(bubbleX + 20, bubbleY + 20));
    tapLabel3.setScale(1.4f);
    tapLabel3.setColor(FloatColor(0.0f, 0.0f, 0.0f, 1.0f));
    tapLabel3.updateText();
    tapLabel3.draw(ctx);

    glDepthMask(GL_TRUE);
    glEnable(GL_DEPTH_TEST);
}

} // namespace caver
