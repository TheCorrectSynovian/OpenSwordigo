#include "caver/components/model_component.h"
#include "caver/scene/scene_object.h"
#include "caver/graphics/gl_inc.h"

namespace caver {

void ModelComponent::render(RenderingContext& ctx) {
    if (modelName_.empty()) return;

    if (!model_) {
        model_ = ctx.getModel(modelName_);
    }
    if (!model_) return;

    // Build Object Model Matrix from position, depth, rotation, scale
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
    Matrix4 rotation = Matrix4::rotationY(rot);
    Matrix4 scaling = Matrix4::scale(Vector3(scale, scale, scale));

    Matrix4 modelMat = translation * rotation * scaling;
    Matrix4 mvp = ctx.getViewProjection() * modelMat;

    ctx.getShader().setMVP(mvp);
    ctx.getShader().setColor(FloatColor(1, 1, 1, 1));

    // If component has explicit texture override, bind it for all meshes
    if (!textureName_.empty()) {
        uint32_t tex = ctx.getTexture(textureName_);
        if (tex != 0) {
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, tex);
            ctx.getShader().setUseTexture(true);
        } else {
            ctx.getShader().setUseTexture(false);
        }
    }

    model_->draw();
}

} // namespace caver
