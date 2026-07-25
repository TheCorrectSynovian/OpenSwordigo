#include "caver/components/light_component.h"
#include "caver/scene/scene_object.h"

namespace caver {

void LightComponent::loadFromProtobuf(const ProtoMessage& msg) {
    Component::loadFromProtobuf(msg);

    uint32_t typeVal = static_cast<uint32_t>(msg.getVarint(1, 3));
    lightData_.type = static_cast<LightType>(typeVal);
    lightData_.intensity = msg.getFloat(2, 1.0f);

    auto colorMsg = msg.getEmbeddedMessage(3);
    if (colorMsg) {
        lightData_.color.x = colorMsg->getFloat(1, 1.0f);
        lightData_.color.y = colorMsg->getFloat(2, 1.0f);
        lightData_.color.z = colorMsg->getFloat(3, 1.0f);
    } else {
        lightData_.color = Vector3(1.0f, 1.0f, 1.0f);
    }

    Vector3 offset(0.0f, 0.0f, 0.0f);
    auto offsetMsg = msg.getEmbeddedMessage(6);
    if (offsetMsg) {
        offset.x = offsetMsg->getFloat(1, 0.0f);
        offset.y = offsetMsg->getFloat(2, 0.0f);
        offset.z = offsetMsg->getFloat(3, 0.0f);
    }

    float rangeVal = msg.getFloat(7, 300.0f);
    lightData_.radius = rangeVal * 3.0f;

    // Position from owner SceneObject transform + offset
    Vector3 objPos(0.0f, 0.0f, 0.0f);
    if (owner_) {
        Vector2 pos = owner_->getPosition();
        objPos = Vector3(pos.x, pos.y, owner_->getDepth());
    }

    if (lightData_.type == LightType::Ambient) {
        lightData_.intensity *= 0.6f;
    } else if (lightData_.type == LightType::Directional) {
        lightData_.position = Vector3(objPos.x + offset.x, objPos.y + offset.y, objPos.z + offset.z + 500.0f);
        Vector3 target(objPos.x + offset.x, objPos.y + offset.y, objPos.z + offset.z);
        lightData_.direction = (target - lightData_.position).normalized();
    } else if (lightData_.type == LightType::Point) {
        lightData_.position = Vector3(objPos.x + offset.x, objPos.y + offset.y, objPos.z + offset.z + 30.0f);
        lightData_.intensity *= 2.0f;
    }
}

} // namespace caver
