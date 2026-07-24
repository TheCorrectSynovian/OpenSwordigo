#ifndef CAVER_SCENE_H
#define CAVER_SCENE_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <caver/scene/scene_object.h>
#include <caver/scene/object_template.h>
#include <caver/resource/protobuf_decoder.h>
#include <caver/math/caver_math.h>

namespace caver {

class Scene {
public:
    Scene() = default;

    const std::string& getName() const { return name_; }
    void setName(const std::string& name) { name_ = name; }

    bool loadFromFile(const std::string& filename);
    bool loadFromProtobuf(const ProtoMessage& sceneMsg);

    void addObject(std::shared_ptr<SceneObject> object);
    const std::vector<std::shared_ptr<SceneObject>>& getObjects() const { return objects_; }

    void setBounds(const AABB& bounds) { bounds_ = bounds; }
    AABB getBounds() const { return bounds_; }

    void update(float dt);
    void render(class RenderingContext& ctx);

    void dumpHierarchy(std::ostream& os = std::cout) const;

private:
    std::string name_;
    AABB bounds_;
    std::vector<std::shared_ptr<SceneObject>> objects_;
};

} // namespace caver

#endif // CAVER_SCENE_H
