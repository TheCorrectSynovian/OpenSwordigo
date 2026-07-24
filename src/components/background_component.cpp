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
        float halfW = 800.0f;
        float halfH = 500.0f;
        std::vector<Vertex> verts = {
            {{-halfW, -halfH, -500.0f}, {0, 0, 1}, {0.0f, 1.0f}},
            {{ halfW, -halfH, -500.0f}, {0, 0, 1}, {1.0f, 1.0f}},
            {{ halfW,  halfH, -500.0f}, {0, 0, 1}, {1.0f, 0.0f}},
            {{-halfW,  halfH, -500.0f}, {0, 0, 1}, {0.0f, 0.0f}}
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

    Matrix4 mvp = ctx.getViewProjection();
    ctx.getShader().setMVP(mvp);
    ctx.getShader().setColor(FloatColor(1, 1, 1, 1));

    bgQuad_->draw();
}

} // namespace caver
