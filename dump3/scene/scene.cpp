#include "caver/scene/scene.h"
#include "caver/resource/vfs.h"
#include "caver/scene/component_factory.h"
#include "caver/components/physics_object_component.h"
#include "caver/components/background_component.h"
#include "caver/components/model_component.h"
#include "caver/components/ground_mesh_component.h"
#include "caver/components/texture_mapping_component.h"
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
        ComponentFactory::instance().registerComponent("TextureMapping", []() {
            return std::make_shared<TextureMappingComponent>();
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

        std::cout << "[SceneDebug] Object template='" << obj->getTemplateName() 
                  << "' pos=(" << obj->getPosition().x << ", " << obj->getPosition().y << ") depth=" << obj->getDepth() << std::endl;

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
    if (name_.find("menu") != std::string::npos) {
        GLuint bgTex = ctx.getTexture("menu_back_2x.tex.png");
        if (bgTex > 0) {
            glDisable(GL_DEPTH_TEST);
            glDepthMask(GL_FALSE);
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, bgTex);
            ctx.getShader().setUseTexture(true);
            ctx.getShader().setColor(FloatColor(1, 1, 1, 1));
            Matrix4 identity;
            ctx.getShader().setMVP(identity);

            static std::shared_ptr<Mesh> fullscreenQuad;
            if (!fullscreenQuad) {
                fullscreenQuad = std::make_shared<Mesh>();
                std::vector<Vertex> verts = {
                    {{-1.0f, -1.0f, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}},
                    {{ 1.0f, -1.0f, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
                    {{ 1.0f,  1.0f, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
                    {{-1.0f,  1.0f, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}}
                };
                std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
                fullscreenQuad->uploadGLBuffers(verts, indices);
            }
            fullscreenQuad->draw();
            glDepthMask(GL_TRUE);
            glEnable(GL_DEPTH_TEST);
        }
    } else {
        // Render grasslandsbackground_day_2x.tex.png for town/grasslands scenes
        glDisable(GL_DEPTH_TEST);
        glDepthMask(GL_FALSE);
        
        GLuint bgTex = ctx.getTexture("grasslandsbackground_day_2x.tex.png");
        if (bgTex == 0) {
            bgTex = ctx.getTexture("grasslandsbackground_day.png");
        }
        if (bgTex == 0) {
            bgTex = ctx.getTexture("woodkeep_bg_2x.tex.png");
        }

        if (bgTex > 0) {
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, bgTex);
            ctx.getShader().setUseTexture(true);
            ctx.getShader().setColor(FloatColor(1, 1, 1, 1));
        } else {
            ctx.getShader().setUseTexture(false);
            ctx.getShader().setColor(FloatColor(0.12f, 0.44f, 0.92f, 1.0f));
        }

        Matrix4 identity;
        ctx.getShader().setMVP(identity);

        static std::shared_ptr<Mesh> bgQuad;
        if (!bgQuad) {
            bgQuad = std::make_shared<Mesh>();
            std::vector<Vertex> verts = {
                {{-1.0f, -1.0f, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}},
                {{ 1.0f, -1.0f, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
                {{ 1.0f,  1.0f, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
                {{-1.0f,  1.0f, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}}
            };
            std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
            bgQuad->uploadGLBuffers(verts, indices);
        }
        bgQuad->draw();

        glDepthMask(GL_TRUE);
        glEnable(GL_DEPTH_TEST);
    }

    // Sort objects back-to-front by depth (larger depth value = further back)
    std::vector<std::shared_ptr<SceneObject>> sortedObjects = objects_;
    std::stable_sort(sortedObjects.begin(), sortedObjects.end(), [](const auto& a, const auto& b) {
        return a->getDepth() > b->getDepth();
    });

    for (auto& obj : sortedObjects) {
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
