#ifndef CAVER_LIGHT_COMPONENT_H
#define CAVER_LIGHT_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/math/caver_math.h>

namespace caver {

enum class LightType {
    Ambient = 1,
    Directional = 2,
    Point = 3
};

struct LightData {
    LightType type{LightType::Ambient};
    float intensity{1.0f};
    Vector3 color{1.0f, 1.0f, 1.0f};
    Vector3 position{0.0f, 0.0f, 0.0f};
    Vector3 direction{0.0f, 0.0f, -1.0f};
    float radius{300.0f};
};

class LightComponent : public Component {
public:
    std::string getClassName() const override { return "Light"; }

    void loadFromProtobuf(const ProtoMessage& msg) override;

    const LightData& getLightData() const { return lightData_; }

private:
    LightData lightData_;
};

} // namespace caver

#endif // CAVER_LIGHT_COMPONENT_H
