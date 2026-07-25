#include "caver/components/background_component.h"
#include "caver/scene/scene_object.h"
#include "caver/graphics/gl_inc.h"

namespace caver {

void BackgroundComponent::render(RenderingContext& ctx) {
    if (textureName_.empty()) return;

    if (textureId_ == 0) {
        textureId_ = ctx.getTexture(textureName_);
    }

    if (!bgQuad_) {
        bgQuad_ = std::make_shared<Mesh>();
        float halfW = 0.5f;
        float halfH = 0.5f;
        std::vector<Vertex> verts = {
            {{-halfW, -halfH, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}},
            {{ halfW, -halfH, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
            {{ halfW,  halfH, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
            {{-halfW,  halfH, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}}
        };
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
        bgQuad_->uploadGLBuffers(verts, indices);
    }

    if (textureId_) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, textureId_);
        ctx.getShader().setUseTexture(true);
    } else {
        ctx.getShader().setUseTexture(false);
    }

    Vector2 camPos = ctx.getCameraPosition();
    float camZ = 0.0f;
    float s = 11000.0f;
    float bgWorldWidth = 20480.0f;
    float bgWorldHeight = 10240.0f; // 1:2 aspect default ratio for background textures

    Vector2 bgObjPos = owner_ ? owner_->getPosition() : Vector2(3535.16f, 407.5f);
    float bgObjZ = owner_ ? owner_->getDepth() : -1000.0f;

    float u = bgObjZ - camZ;
    float d = (u < -0.001f) ? (-s / u) : 1.0f;
    float px = camPos.x + (bgObjPos.x - camPos.x) * d;
    float py = camPos.y + (bgObjPos.y - camPos.y) * d;

    Matrix4 modelMat = Matrix4::translation(Vector3(px, py, -s)) * Matrix4::scale(Vector3(bgWorldWidth, bgWorldHeight, 1.0f));
    Matrix4 mvp = ctx.getViewProjection() * modelMat;

    ctx.getShader().setMVP(mvp);
    ctx.getShader().setColor(FloatColor(1, 1, 1, 1));

    bgQuad_->draw();
}

} // namespace caver
