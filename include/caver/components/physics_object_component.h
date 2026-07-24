#ifndef CAVER_PHYSICS_OBJECT_COMPONENT_H
#define CAVER_PHYSICS_OBJECT_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/math/caver_math.h>

namespace caver {

class PhysicsObjectComponent : public Component {
public:
    std::string getClassName() const override { return "PhysicsObjectComponent"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);

        // Check if nested under tag 1274 (field 159) or direct
        auto physMsg = msg.getEmbeddedMessage(159).value_or(msg);

        physicsEnabled_ = physMsg.getBool(1, true);
        gravityDirection_ = physMsg.getVector2(2);
        gravityMagnitude_ = physMsg.getFloat(3, 9.8f);
        groundDeceleration_ = physMsg.getFloat(4, 0.0f);
        airDeceleration_ = physMsg.getFloat(5, 0.0f);
        maxSpeed_ = physMsg.getFloat(6, 100.0f);
        allowRotation_ = physMsg.getBool(7, false);
        elasticity_ = physMsg.getFloat(8, 0.0f);
    }

    void update(float dt) override {
        if (!physicsEnabled_) return;
        // Native physics simulation update stub
        velocity_ += gravityDirection_ * (gravityMagnitude_ * dt);
    }

    bool isPhysicsEnabled() const { return physicsEnabled_; }
    Vector2 getVelocity() const { return velocity_; }
    void setVelocity(const Vector2& v) { velocity_ = v; }

private:
    bool physicsEnabled_{true};
    Vector2 gravityDirection_{0.0f, -1.0f};
    float gravityMagnitude_{9.8f};
    float groundDeceleration_{0.0f};
    float airDeceleration_{0.0f};
    float maxSpeed_{100.0f};
    bool allowRotation_{false};
    float elasticity_{0.0f};
    Vector2 velocity_{0.0f, 0.0f};
};

} // namespace caver

#endif // CAVER_PHYSICS_OBJECT_COMPONENT_H
