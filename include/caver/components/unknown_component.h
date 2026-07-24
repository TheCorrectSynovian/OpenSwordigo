#ifndef CAVER_UNKNOWN_COMPONENT_H
#define CAVER_UNKNOWN_COMPONENT_H

#include <caver/scene/component.h>
#include <iostream>

namespace caver {

class UnknownComponent : public Component {
public:
    UnknownComponent(std::string className) : className_(std::move(className)) {}

    std::string getClassName() const override { return className_; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        rawMsg_ = msg;
    }

    void update(float dt) override {
        // Stub update
    }

    const ProtoMessage& getRawMsg() const { return rawMsg_; }

private:
    std::string className_;
    ProtoMessage rawMsg_;
};

} // namespace caver

#endif // CAVER_UNKNOWN_COMPONENT_H
