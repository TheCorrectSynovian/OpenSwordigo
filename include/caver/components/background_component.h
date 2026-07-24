#ifndef CAVER_BACKGROUND_COMPONENT_H
#define CAVER_BACKGROUND_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/graphics/rendering_context.h>
#include <caver/graphics/pod_loader.h>

namespace caver {

class BackgroundComponent : public Component {
public:
    std::string getClassName() const override { return "BackgroundComponent"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        // Field 1 (tag 10): TextureName
        textureName_ = msg.getString(1);
    }

    void render(RenderingContext& ctx) override;

private:
    std::string textureName_;
    uint32_t textureId_{0};
    std::shared_ptr<Mesh> bgQuad_;
};

} // namespace caver

#endif // CAVER_BACKGROUND_COMPONENT_H
