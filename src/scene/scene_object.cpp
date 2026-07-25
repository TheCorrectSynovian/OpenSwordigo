#include "caver/scene/scene_object.h"
#include "caver/scene/component_factory.h"

namespace caver {

void SceneObject::addComponent(std::shared_ptr<Component> comp) {
    if (!comp) return;
    comp->setOwner(this);
    components_.push_back(std::move(comp));
}

void SceneObject::loadFromProtobuf(const ProtoMessage& msg) {
    templateName_ = msg.getString(1);
    identifier_   = msg.getString(2);

    float px = 0.0f, py = 0.0f, pz = 0.0f;
    float rot = 0.0f, scl = 1.0f;

    for (const auto& f : msg.fields) {
        if (f.fieldNumber == 4) {
            if (f.wireType == WireType::LengthDelimited && !f.bytesVal.empty()) {
                ProtoMessage posMsg;
                posMsg.parseFromBytes(f.bytesVal);
                for (const auto& pf : posMsg.fields) {
                    if (pf.fieldNumber == 1) px = pf.asFloat();
                    if (pf.fieldNumber == 2) py = pf.asFloat();
                }
            } else if (f.wireType == WireType::Fixed32) {
                px = f.asFloat();
            }
        } else if (f.fieldNumber == 5 && f.wireType == WireType::Fixed32) {
            py = f.asFloat();
        } else if (f.fieldNumber == 6 && f.wireType == WireType::Fixed32) {
            pz = f.asFloat();
        } else if (f.fieldNumber == 7 && f.wireType == WireType::Fixed32) {
            rot = f.asFloat();
        } else if (f.fieldNumber == 8 && f.wireType == WireType::Fixed32) {
            scl = f.asFloat();
        } else if (f.fieldNumber == 9) {
            hidden_ = (f.varintVal != 0);
        }
    }

    // If pos_z is not set in field 6, check field 5 as depth
    if (msg.findField(6) == nullptr && msg.findField(5) != nullptr) {
        pz = msg.getFloat(5, 0.0f);
    }

    position_ = Vector2(px, py);
    depth_    = pz;
    rotation_ = rot;
    scaling_  = scl;

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
