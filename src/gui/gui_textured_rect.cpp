#include "caver/gui/gui_textured_rect.h"
#include "caver/resource/texture_library.h"

namespace caver {

void GUITexturedRect::setTextureName(const std::string& texName) {
    textureName_ = texName;
}

void GUITexturedRect::setFrame(const Rectangle& rect) {
    frame_ = rect;
    rebuildMesh();
}

void GUITexturedRect::setColor(const FloatColor& color) {
    color_ = color;
}

void GUITexturedRect::rebuildMesh() {
    if (textureName_.empty() && textureId_ == 0) return;

    float uMin = 0.0f, vMin = 0.0f, uMax = 1.0f, vMax = 1.0f;
    if (textureId_ == 0) {
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

    std::vector<Vertex> verts = {
        {{frame_.x, frame_.y, 0.0f}, {0, 0, 1}, {uMin, vMin}},
        {{frame_.x + frame_.width, frame_.y, 0.0f}, {0, 0, 1}, {uMax, vMin}},
        {{frame_.x + frame_.width, frame_.y + frame_.height, 0.0f}, {0, 0, 1}, {uMax, vMax}},
        {{frame_.x, frame_.y + frame_.height, 0.0f}, {0, 0, 1}, {uMin, vMax}}
    };
    std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
    mesh_->uploadGLBuffers(verts, indices);
}

void GUITexturedRect::draw(RenderingContext& ctx) {
    if (!mesh_ || textureId_ == 0) return;

    ctx.getShader().setColor(color_);
    ctx.getShader().setUseTexture(true);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, textureId_);

    mesh_->draw(false);
}

} // namespace caver
