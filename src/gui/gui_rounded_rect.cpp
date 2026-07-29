#include "caver/gui/gui_rounded_rect.h"
#include "caver/resource/texture_library.h"
#include <iostream>

namespace caver {

void GUIRoundedRect::setTextureName(const std::string& texName) {
    textureName_ = texName;
}

void GUIRoundedRect::createWithOuterBounds(const Rectangle& bounds) {
    if (outerBounds_.x == bounds.x && outerBounds_.y == bounds.y &&
        outerBounds_.width == bounds.width && outerBounds_.height == bounds.height) {
        return; // Already created
    }

    outerBounds_ = bounds;
    
    // Default margins (adjust to match texture if needed)
    float marginX = 12.0f;
    float marginY = 12.0f;
    
    innerBounds_.x = bounds.x + marginX;
    innerBounds_.y = bounds.y + marginY;
    innerBounds_.width = bounds.width - 2.0f * marginX;
    innerBounds_.height = bounds.height - 2.0f * marginY;
    
    createSprite();
}

void GUIRoundedRect::setColor(const FloatColor& color) {
    color_ = color;
}

void GUIRoundedRect::createSprite() {
    if (textureId_ == 0 && !textureName_.empty()) {
        auto regionOpt = TextureLibrary::sharedLibrary().getAtlasRegion(textureName_);
        if (regionOpt) {
            textureId_ = TextureLibrary::sharedLibrary().textureForName(regionOpt->atlasTextureName);
            uMin_ = regionOpt->uMin;
            vMin_ = regionOpt->vMin;
            uMax_ = regionOpt->uMax;
            vMax_ = regionOpt->vMax;
        } else {
            textureId_ = TextureLibrary::sharedLibrary().textureForName(textureName_);
            uMin_ = 0.0f; vMin_ = 0.0f; uMax_ = 1.0f; vMax_ = 1.0f;
        }
    }

    // 9-slice grid generation
    float xs[4] = { outerBounds_.x, innerBounds_.x, innerBounds_.x + innerBounds_.width, outerBounds_.x + outerBounds_.width };
    float ys[4] = { outerBounds_.y, innerBounds_.y, innerBounds_.y + innerBounds_.height, outerBounds_.y + outerBounds_.height };
    
    float uvMarginU = (uMax_ - uMin_) * 0.25f; // rough approximation for UV margins
    float uvMarginV = (vMax_ - vMin_) * 0.25f;
    
    float us[4] = { uMin_, uMin_ + uvMarginU, uMax_ - uvMarginU, uMax_ };
    float vs[4] = { vMin_, vMin_ + uvMarginV, vMax_ - uvMarginV, vMax_ };

    std::vector<Vertex> verts;
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 4; ++x) {
            verts.push_back({{xs[x], ys[y], 0.0f}, {0.0f, 0.0f, 1.0f}, {us[x], vs[y]}});
        }
    }

    std::vector<uint16_t> indices;
    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            uint16_t i0 = y * 4 + x;
            uint16_t i1 = i0 + 1;
            uint16_t i2 = (y + 1) * 4 + x + 1;
            uint16_t i3 = (y + 1) * 4 + x;
            
            indices.push_back(i0);
            indices.push_back(i1);
            indices.push_back(i2);
            indices.push_back(i0);
            indices.push_back(i2);
            indices.push_back(i3);
        }
    }

    mesh_->uploadGLBuffers(verts, indices);
}

void GUIRoundedRect::draw(RenderingContext& ctx) {
    if (!mesh_) return;
    
    static int logCount = 0;
    if (logCount++ % 60 == 0) {
        std::cout << "[GUIRoundedRect] drawing mesh with " << mesh_->getVertexCount() << " vertices, tex=" << textureId_ << std::endl;
    }
    
    ctx.getShader().setColor(color_);
    
    if (textureId_ != 0) {
        ctx.getShader().setUseTexture(true);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, textureId_);
    } else {
        ctx.getShader().setUseTexture(false);
    }
    
    mesh_->draw(false);
}

} // namespace caver
