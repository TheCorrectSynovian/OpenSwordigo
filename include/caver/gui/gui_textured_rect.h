#pragma once
#include "caver/math/caver_math.h"
#include "caver/graphics/pod_loader.h"
#include "caver/graphics/rendering_context.h"
#include <memory>
#include <string>

namespace caver {

class GUITexturedRect {
public:
    GUITexturedRect() : mesh_(std::make_shared<Mesh>()) {}

    void setTextureName(const std::string& texName);
    void setFrame(const Rectangle& rect);
    void setColor(const FloatColor& color);
    void draw(RenderingContext& ctx);

private:
    void rebuildMesh();

    Rectangle frame_;
    FloatColor color_{1.0f, 1.0f, 1.0f, 1.0f};
    std::string textureName_;
    uint32_t textureId_{0};
    std::shared_ptr<Mesh> mesh_;
};

} // namespace caver
