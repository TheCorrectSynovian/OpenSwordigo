#ifndef CAVER_SCENE_OBJECT_H
#define CAVER_SCENE_OBJECT_H

#include <string>
#include <vector>
#include <memory>
#include <caver/math/caver_math.h>
#include <caver/scene/component.h>
#include <caver/resource/protobuf_decoder.h>

namespace caver {

class Scene;

class SceneObject {
public:
    SceneObject() = default;

    const std::string& getIdentifier() const { return identifier_; }
    void setIdentifier(const std::string& id) { identifier_ = id; }

    const std::string& getTemplateName() const { return templateName_; }
    void setTemplateName(const std::string& name) { templateName_ = name; }

    Vector2 getPosition() const { return position_; }
    void setPosition(const Vector2& pos) { position_ = pos; }

    float getDepth() const { return depth_; }
    void setDepth(float d) { depth_ = d; }

    float getRotation() const { return rotation_; }
    void setRotation(float r) { rotation_ = r; }

    float getScaling() const { return scaling_; }
    void setScaling(float s) { scaling_ = s; }

    bool isHidden() const { return hidden_; }
    void setHidden(bool h) { hidden_ = h; }

    Scene* getScene() const { return scene_; }
    void setScene(Scene* s) { scene_ = s; }

    void addComponent(std::shared_ptr<Component> comp);
    const std::vector<std::shared_ptr<Component>>& getComponents() const { return components_; }

    template<typename T>
    std::shared_ptr<T> getComponent() const {
        for (const auto& comp : components_) {
            auto casted = std::dynamic_pointer_cast<T>(comp);
            if (casted) return casted;
        }
        return nullptr;
    }

    Matrix4 getWorldMatrix() const;
    void loadFromProtobuf(const ProtoMessage& msg);
    void update(float dt);
    void render(class RenderingContext& ctx);

private:
    std::string identifier_;
    std::string templateName_;
    Vector2 position_{0.0f, 0.0f};
    float depth_{0.0f};
    float rotation_{0.0f};
    float scaling_{1.0f};
    bool hidden_{false};
    Scene* scene_{nullptr};
    std::vector<std::shared_ptr<Component>> components_;
};

} // namespace caver

#endif // CAVER_SCENE_OBJECT_H
