#ifndef CAVER_GROUND_MESH_COMPONENT_H
#define CAVER_GROUND_MESH_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/graphics/rendering_context.h>
#include <caver/graphics/pod_loader.h>

namespace caver {

class GroundMeshComponent : public Component {
public:
    std::string getClassName() const override { return "GroundMesh"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        textureName_ = msg.getString(1);
    }

    void render(RenderingContext& ctx) override;

private:
    std::string textureName_;
    uint32_t textureId_{0};
    std::shared_ptr<Mesh> mesh_;
};

} // namespace caver

#endif // CAVER_GROUND_MESH_COMPONENT_H
