#ifndef CAVER_OBJECT_TEMPLATE_H
#define CAVER_OBJECT_TEMPLATE_H

#include <string>
#include <unordered_map>
#include <memory>
#include <caver/scene/scene_object.h>
#include <caver/resource/protobuf_decoder.h>

namespace caver {

class ObjectTemplate {
public:
    ObjectTemplate() = default;

    const std::string& getName() const { return name_; }
    void setName(const std::string& name) { name_ = name; }

    const ProtoMessage& getTemplateObjectMsg() const { return templateObjectMsg_; }

    void loadFromProtobuf(const ProtoMessage& msg) {
        // Field 1 (tag 10): SceneObject
        auto objMsg = msg.getEmbeddedMessage(1);
        if (objMsg) {
            templateObjectMsg_ = *objMsg;
            name_ = templateObjectMsg_.getString(2); // Identifier or TemplateName
        }
    }

private:
    std::string name_;
    ProtoMessage templateObjectMsg_;
};

class ObjectLibrary {
public:
    static ObjectLibrary& instance();

    void registerTemplate(std::shared_ptr<ObjectTemplate> tmpl);
    std::shared_ptr<ObjectTemplate> findTemplate(const std::string& name) const;
    void loadFromProtobuf(const ProtoMessage& libMsg);

private:
    ObjectLibrary() = default;
    std::unordered_map<std::string, std::shared_ptr<ObjectTemplate>> templates_;
};

} // namespace caver

#endif // CAVER_OBJECT_TEMPLATE_H
