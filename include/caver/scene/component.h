#ifndef CAVER_COMPONENT_H
#define CAVER_COMPONENT_H

#include <string>
#include <memory>
#include <caver/resource/protobuf_decoder.h>

namespace caver {

class SceneObject;

class Component {
public:
    virtual ~Component() = default;

    virtual std::string getClassName() const = 0;
    virtual std::string getIdentifier() const { return identifier_; }
    virtual void setIdentifier(const std::string& id) { identifier_ = id; }

    virtual void loadFromProtobuf(const ProtoMessage& msg) {
        // Standard component header fields:
        // tag 10 -> field 1: ClassName
        // tag 16 -> field 2: Identifier
        // tag 26 -> field 3: Label
        // tag 32 -> field 4: ParentComponentIdentifier
        identifier_ = msg.getString(2);
        label_ = msg.getString(3);
        parentIdentifier_ = msg.getString(4);
    }

    virtual void update(float dt) {}
    virtual void render(class RenderingContext& ctx) {}

    SceneObject* getOwner() const { return owner_; }
    void setOwner(SceneObject* owner) { owner_ = owner; }

    const std::string& getLabel() const { return label_; }
    const std::string& getParentIdentifier() const { return parentIdentifier_; }

protected:
    std::string identifier_;
    std::string label_;
    std::string parentIdentifier_;
    SceneObject* owner_{nullptr};
};

} // namespace caver

#endif // CAVER_COMPONENT_H
