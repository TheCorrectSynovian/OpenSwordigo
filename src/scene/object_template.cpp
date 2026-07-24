#include "caver/scene/object_template.h"
#include <iostream>

namespace caver {

ObjectLibrary& ObjectLibrary::instance() {
    static ObjectLibrary instance;
    return instance;
}

void ObjectLibrary::registerTemplate(std::shared_ptr<ObjectTemplate> tmpl) {
    if (tmpl && !tmpl->getName().empty()) {
        templates_[tmpl->getName()] = tmpl;
    }
}

std::shared_ptr<ObjectTemplate> ObjectLibrary::findTemplate(const std::string& name) const {
    auto it = templates_.find(name);
    if (it != templates_.end()) return it->second;
    return nullptr;
}

void ObjectLibrary::loadFromProtobuf(const ProtoMessage& libMsg) {
    // Field 2 (tag 18): Template (repeated ObjectTemplate)
    auto tmplMsgs = libMsg.getEmbeddedMessages(2);
    for (const auto& tmplMsg : tmplMsgs) {
        auto tmpl = std::make_shared<ObjectTemplate>();
        tmpl->loadFromProtobuf(tmplMsg);
        registerTemplate(tmpl);
    }
}

} // namespace caver
