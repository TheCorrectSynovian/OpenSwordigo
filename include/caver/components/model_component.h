#ifndef CAVER_MODEL_COMPONENT_H
#define CAVER_MODEL_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/graphics/rendering_context.h>
#include <caver/graphics/pod_loader.h>

namespace caver {

class ModelComponent : public Component {
public:
    std::string getClassName() const override { return "ModelComponent"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);

        // Check embedded ModelComponent message (tag 810 -> field 101) or direct
        auto modelMsg = msg.getEmbeddedMessage(101).value_or(msg);
        modelName_ = modelMsg.getString(1); // Field 1: ModelName / Path
        textureName_ = modelMsg.getString(2); // Field 2: TextureName
    }

    void render(RenderingContext& ctx) override;

    const std::string& getModelName() const { return modelName_; }
    void setModelName(const std::string& name) { modelName_ = name; }

private:
    std::string modelName_;
    std::string textureName_;
    std::shared_ptr<Model> model_;
    uint32_t textureId_{0};
};

} // namespace caver

#endif // CAVER_MODEL_COMPONENT_H
