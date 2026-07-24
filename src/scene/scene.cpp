#include "caver/scene/scene.h"
#include "caver/resource/vfs.h"
#include "caver/scene/component_factory.h"
#include "caver/components/physics_object_component.h"
#include "caver/components/background_component.h"
#include "caver/components/model_component.h"
#include "caver/components/ground_mesh_component.h"
#include <iostream>

namespace caver {

void Scene::addObject(std::shared_ptr<SceneObject> object) {
    if (!object) return;
    object->setScene(this);
    objects_.push_back(std::move(object));
}

bool Scene::loadFromFile(const std::string& filename) {
    setName(filename);
    auto data = VFS::instance().readFile(filename);
    if (!data) {
        std::cerr << "[Scene] Error: Could not read scene file '" << filename << "'" << std::endl;
        return false;
    }

    ProtoMessage sceneMsg;
    if (!sceneMsg.parseFromBytes(*data)) {
        std::cerr << "[Scene] Error: Failed to parse Protobuf binary payload from '" << filename << "'" << std::endl;
        return false;
    }

    return loadFromProtobuf(sceneMsg);
}

bool Scene::loadFromProtobuf(const ProtoMessage& sceneMsg) {
    // Register standard components in factory
    static bool factoryInitialized = false;
    if (!factoryInitialized) {
        ComponentFactory::instance().registerComponent("PhysicsObjectComponent", []() {
            return std::make_shared<PhysicsObjectComponent>();
        });
        ComponentFactory::instance().registerComponent("BackgroundComponent", []() {
            return std::make_shared<BackgroundComponent>();
        });
        ComponentFactory::instance().registerComponent("ModelComponent", []() {
            return std::make_shared<ModelComponent>();
        });
        ComponentFactory::instance().registerComponent("Model", []() {
            return std::make_shared<ModelComponent>();
        });
        ComponentFactory::instance().registerComponent("GroundMesh", []() {
            return std::make_shared<GroundMeshComponent>();
        });
        ComponentFactory::instance().registerComponent("GroundPolygon", []() {
            return std::make_shared<GroundMeshComponent>();
        });
        ComponentFactory::instance().registerComponent("GroundMeshGenerator", []() {
            return std::make_shared<GroundMeshComponent>();
        });
        factoryInitialized = true;
    }

    // 1. Load ObjectLibrary if present (Field 2, tag 18)
    auto libMsg = sceneMsg.getEmbeddedMessage(2);
    if (libMsg) {
        ObjectLibrary::instance().loadFromProtobuf(*libMsg);
    }

    // 2. Load SceneObjects (Field 1, tag 10 - repeated)
    auto objMsgs = sceneMsg.getEmbeddedMessages(1);
    for (const auto& objMsg : objMsgs) {
        auto obj = std::make_shared<SceneObject>();
        obj->loadFromProtobuf(objMsg);

        // Apply template defaults if templateName is set
        if (!obj->getTemplateName().empty()) {
            auto tmpl = ObjectLibrary::instance().findTemplate(obj->getTemplateName());
            if (tmpl && !tmpl->getTemplateObjectMsg().fields.empty()) {
                // Overlay template components/properties
                SceneObject tmplObj;
                tmplObj.loadFromProtobuf(tmpl->getTemplateObjectMsg());
                for (const auto& comp : tmplObj.getComponents()) {
                    obj->addComponent(comp);
                }
            }
        }

        addObject(obj);
    }

    std::cout << "[Scene] Successfully loaded scene '" << name_ << "' with " 
              << objects_.size() << " SceneObjects." << std::endl;
    return true;
}

void Scene::update(float dt) {
    for (auto& obj : objects_) {
        obj->update(dt);
    }
}

void Scene::render(RenderingContext& ctx) {
    for (auto& obj : objects_) {
        obj->render(ctx);
    }
}

void Scene::dumpHierarchy(std::ostream& os) const {
    os << "========================================================\n";
    os << "SCENE GRAPH DUMP: " << name_ << "\n";
    os << "Total Objects: " << objects_.size() << "\n";
    os << "========================================================\n";

    size_t idx = 0;
    for (const auto& obj : objects_) {
        os << "[" << idx++ << "] SceneObject\n";
        os << "  Identifier:  " << (obj->getIdentifier().empty() ? "<unnamed>" : obj->getIdentifier()) << "\n";
        os << "  Template:    " << (obj->getTemplateName().empty() ? "<none>" : obj->getTemplateName()) << "\n";
        os << "  Position:    (" << obj->getPosition().x << ", " << obj->getPosition().y << ")\n";
        os << "  Depth:       " << obj->getDepth() << "\n";
        os << "  Rotation:    " << obj->getRotation() << "\n";
        os << "  Scaling:     " << obj->getScaling() << "\n";
        os << "  Hidden:      " << (obj->isHidden() ? "true" : "false") << "\n";
        os << "  Components (" << obj->getComponents().size() << "):\n";

        for (const auto& comp : obj->getComponents()) {
            os << "    - Class: " << comp->getClassName();
            if (!comp->getIdentifier().empty()) {
                os << " (ID: " << comp->getIdentifier() << ")";
            }
            if (!comp->getLabel().empty()) {
                os << " [Label: " << comp->getLabel() << "]";
            }
            os << "\n";
        }
        os << "\n";
    }
    os << "========================================================\n";
}

} // namespace caver
