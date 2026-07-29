#include "caver/gui/gui_frame_view.h"
#include "caver/resource/texture_library.h"

namespace caver {

void GUIFrameView::render(RenderingContext& ctx) {
    if (!visible_) return;

    float uMin = 0.0f, vMin = 0.0f, uMax = 1.0f, vMax = 1.0f;
    if (!textureName_.empty() && textureId_ == 0) {
        auto regionOpt = TextureLibrary::sharedLibrary().getAtlasRegion(textureName_);
        if (regionOpt) {
            textureId_ = TextureLibrary::sharedLibrary().textureForName(regionOpt->atlasTextureName);
            uMin = regionOpt->uMin;
            vMin = regionOpt->vMin;
            uMax = regionOpt->uMax;
            vMax = regionOpt->vMax;
        } else {
            textureId_ = TextureLibrary::sharedLibrary().textureForName(textureName_);
        }
    }

    if (!quad_) {
        quad_ = std::make_shared<Mesh>();
        float halfW = 0.5f;
        float halfH = 0.5f;
        std::vector<Vertex> verts = {
            {{-halfW, -halfH, 0.0f}, {0, 0, 1}, {uMin, vMin}},
            {{ halfW, -halfH, 0.0f}, {0, 0, 1}, {uMax, vMin}},
            {{ halfW,  halfH, 0.0f}, {0, 0, 1}, {uMax, vMax}},
            {{-halfW,  halfH, 0.0f}, {0, 0, 1}, {uMin, vMax}}
        };
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
        quad_->uploadGLBuffers(verts, indices);
    }

    if (textureId_) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, textureId_);
        ctx.getShader().setUseTexture(true);
    } else {
        ctx.getShader().setUseTexture(false);
    }

    Matrix4 modelMat = Matrix4::translation(Vector3(position_.x, position_.y, 0.0f)) *
                       Matrix4::scale(Vector3(size_.x, size_.y, 1.0f));

    Matrix4 orthoProj = Matrix4::ortho(0.0f, static_cast<float>(ctx.getWidth()),
                                       0.0f, static_cast<float>(ctx.getHeight()),
                                       -100.0f, 100.0f);

    ctx.getShader().setMVP(orthoProj * modelMat);
    ctx.getShader().setColor(FloatColor(1, 1, 1, 1));

    quad_->draw();

    GUIView::render(ctx);
}

} // namespace caver
