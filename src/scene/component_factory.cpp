#include "caver/scene/component_factory.h"
#include "caver/components/ground_mesh_component.h"
#include "caver/components/background_component.h"
#include "caver/components/light_component.h"
#include "caver/components/unknown_component.h"

namespace caver {

ComponentFactory::ComponentFactory() {
    registerComponent("GroundMesh", []() { return std::make_shared<GroundMeshComponent>(); });
    registerComponent("GroundMeshGenerator", []() { return std::make_shared<UnknownComponent>("GroundMeshGenerator"); });
    registerComponent("Light", []() { return std::make_shared<LightComponent>(); });
    registerComponent("LightComponent", []() { return std::make_shared<LightComponent>(); });
    registerComponent("Background", []() { return std::make_shared<BackgroundComponent>(); });
    registerComponent("BackgroundComponent", []() { return std::make_shared<BackgroundComponent>(); });
}

ComponentFactory& ComponentFactory::instance() {
    static ComponentFactory instance;
    return instance;
}

void ComponentFactory::registerComponent(const std::string& className, Creator creator) {
    creators_[className] = std::move(creator);
}

std::shared_ptr<Component> ComponentFactory::create(const std::string& className) {
    auto it = creators_.find(className);
    if (it != creators_.end()) {
        return it->second();
    }
    std::cout << "[ComponentFactory] Note: Unregistered component class '" << className 
              << "', producing UnknownComponent stub." << std::endl;
    return std::make_shared<UnknownComponent>(className);
}

std::shared_ptr<Component> ComponentFactory::createFromProtobuf(const ProtoMessage& compMsg) {
    // Field 1 (tag 10): ClassName
    std::string className = compMsg.getString(1);

    if (className.empty()) {
        // Fallback: check sub-message tag presence if ClassName is not set directly
        // For instance tag 1274 -> PhysicsObjectComponent, tag 802 -> SpriteComponent
        for (const auto& field : compMsg.fields) {
            if (field.wireType == WireType::LengthDelimited) {
                // If a sub-component message is embedded, we can deduce class from field tag
                switch (field.fieldNumber) {
                    case 100: className = "SpriteComponent"; break; // tag 802 >> 3
                    case 159: className = "PhysicsObjectComponent"; break; // tag 1274 >> 3
                    case 101: className = "ModelComponent"; break; // tag 810 >> 3
                    case 130: className = "LightComponent"; break; // tag 1042 >> 3
                    default: break;
                }
            }
        }
    }

    if (className.empty()) {
        className = "GenericComponent";
    }

    std::shared_ptr<Component> comp = create(className);
    comp->loadFromProtobuf(compMsg);
    return comp;
}

} // namespace caver
