#ifndef CAVER_GROUND_MESH_COMPONENT_H
#define CAVER_GROUND_MESH_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/graphics/rendering_context.h>
#include <caver/graphics/pod_loader.h>
#include <iostream>

namespace caver {

struct GroundSubMesh {
    std::shared_ptr<Mesh> mesh;
    std::string textureName;
    uint32_t textureId{0};
};

class GroundMeshComponent : public Component {
public:
    std::string getClassName() const override { return "GroundMesh"; }

    void loadFromProtobuf(const ProtoMessage& msg) override;
    void render(RenderingContext& ctx) override;

    const std::vector<Vector2>& getPolygonPoints() const { return polygonPoints_; }
    const std::vector<GroundSubMesh>& getSurfaceMeshes() const { return surfaceMeshes_; }
    const std::vector<GroundSubMesh>& getFrontMeshes() const { return frontMeshes_; }

private:
    void parseGroundMeshBlock(const std::vector<uint8_t>& bytes);
    void parseSingleMesh(const std::vector<uint8_t>& bytes, bool isSurface);

    std::string textureName_;
    uint32_t textureId_{0};
    std::vector<Vector2> polygonPoints_;
    std::vector<GroundSubMesh> surfaceMeshes_;
    std::vector<GroundSubMesh> frontMeshes_;
};

} // namespace caver

#endif // CAVER_GROUND_MESH_COMPONENT_H
