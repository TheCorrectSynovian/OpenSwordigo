#ifndef CAVER_COMPONENT_FACTORY_H
#define CAVER_COMPONENT_FACTORY_H

#include <string>
#include <memory>
#include <unordered_map>
#include <functional>
#include <caver/scene/component.h>

namespace caver {

class ComponentFactory {
public:
    using Creator = std::function<std::shared_ptr<Component>()>;

    static ComponentFactory& instance();

    void registerComponent(const std::string& className, Creator creator);
    std::shared_ptr<Component> create(const std::string& className);
    std::shared_ptr<Component> createFromProtobuf(const ProtoMessage& compMsg);

private:
    ComponentFactory();
    std::unordered_map<std::string, Creator> creators_;
};

} // namespace caver

#endif // CAVER_COMPONENT_FACTORY_H
