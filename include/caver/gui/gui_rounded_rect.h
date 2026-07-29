#pragma once
#include "caver/math/caver_math.h"
#include "caver/graphics/pod_loader.h"
#include "caver/graphics/rendering_context.h"
#include <memory>
#include <string>

namespace caver {

class GUIRoundedRect {
public:
    GUIRoundedRect() : mesh_(std::make_shared<Mesh>()) {}

    void setTextureName(const std::string& texName);
    void createWithOuterBounds(const Rectangle& bounds);
    void setColor(const FloatColor& color);
    void draw(RenderingContext& ctx);

private:
    void createSprite();

    Rectangle outerBounds_;
    Rectangle innerBounds_;
    FloatColor color_{1.0f, 1.0f, 1.0f, 1.0f};
    std::string textureName_;
    uint32_t textureId_{0};
    
    float uMin_{0.0f}, vMin_{0.0f}, uMax_{1.0f}, vMax_{1.0f};
    
    std::shared_ptr<Mesh> mesh_;
};

} // namespace caver
