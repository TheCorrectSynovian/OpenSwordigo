#include "caver/scene/scene_object.h"
#include "caver/scene/component_factory.h"

namespace caver {

void SceneObject::addComponent(std::shared_ptr<Component> comp) {
    if (!comp) return;
    comp->setOwner(this);
    components_.push_back(std::move(comp));
}

void SceneObject::loadFromProtobuf(const ProtoMessage& msg) {
    // SceneObject Protobuf schema tags:
    // Field 1 (tag 10): TemplateName
    // Field 2 (tag 18): Identifier
    // Field 3 (tag 26): Component (repeated embedded messages)
    // Field 4 (tag 34): Position (Vector2)
    // Field 5 (tag 45): Depth
    // Field 6 (tag 53): Rotation
    // Field 7 (tag 61): Scaling
    // Field 9 (tag 72): Hidden
    templateName_ = msg.getString(1);
    identifier_   = msg.getString(2);
    position_     = msg.getVector2(4);
    depth_        = msg.getFloat(5, 0.0f);
    rotation_     = msg.getFloat(6, 0.0f);
    scaling_      = msg.getFloat(7, 1.0f);
    hidden_       = msg.getBool(9, false);

    // Read repeated component messages (field 3)
    auto compMsgs = msg.getEmbeddedMessages(3);
    for (const auto& compMsg : compMsgs) {
        auto comp = ComponentFactory::instance().createFromProtobuf(compMsg);
        if (comp) {
            addComponent(comp);
        }
    }
}

void SceneObject::update(float dt) {
    for (auto& comp : components_) {
        comp->update(dt);
    }
}

void SceneObject::render(RenderingContext& ctx) {
    if (hidden_) return;
    for (auto& comp : components_) {
        comp->render(ctx);
    }
}

} // namespace caver
