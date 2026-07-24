#include "caver/components/ground_mesh_component.h"
#include "caver/scene/scene_object.h"
#include "caver/graphics/gl_inc.h"

namespace caver {

void GroundMeshComponent::render(RenderingContext& ctx) {
    if (!mesh_) {
        mesh_ = std::make_shared<Mesh>();
        float halfW = 40.0f;
        float halfH = 20.0f;
        std::vector<Vertex> verts = {
            {{-halfW, -halfH, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}},
            {{ halfW, -halfH, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
            {{ halfW,  halfH, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
            {{-halfW,  halfH, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}}
        };
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};
        mesh_->uploadGLBuffers(verts, indices);
    }

    if (!textureName_.empty() && textureId_ == 0) {
        textureId_ = ctx.getTexture(textureName_);
    }

    if (textureId_) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, textureId_);
        ctx.getShader().setUseTexture(true);
    } else {
        ctx.getShader().setUseTexture(false);
    }

    Vector2 pos(0, 0);
    float depth = 0.0f;
    float rot = 0.0f;
    float scale = 1.0f;

    if (owner_) {
        pos = owner_->getPosition();
        depth = owner_->getDepth();
        rot = owner_->getRotation();
        scale = owner_->getScaling();
    }

    Matrix4 translation = Matrix4::translation(Vector3(pos.x, pos.y, depth));
    Matrix4 rotation = Matrix4::rotationZ(rot);
    Matrix4 scaling = Matrix4::scale(Vector3(scale, scale, scale));

    Matrix4 modelMat = translation * rotation * scaling;
    Matrix4 mvp = ctx.getViewProjection() * modelMat;

    ctx.getShader().setMVP(mvp);
    ctx.getShader().setColor(FloatColor(0.8f, 0.8f, 0.8f, 1.0f));

    mesh_->draw();
}

} // namespace caver
