#ifndef CAVER_RENDERING_CONTEXT_H
#define CAVER_RENDERING_CONTEXT_H

#include <memory>
#include <string>
#include <unordered_map>
#include <caver/math/caver_math.h>
#include <caver/graphics/shader_program.h>
#include <caver/graphics/pvr_loader.h>
#include <caver/graphics/pod_loader.h>

namespace caver {

struct TextureData {
    std::string name;
    uint32_t glTextureId{0};
    int width{0};
    int height{0};
};

class RenderingContext {
public:
    static RenderingContext& instance();

    bool initGL(int viewportWidth, int viewportHeight);
    void printGLDiagnostics() const;

    void setViewport(int width, int height);
    int getWidth() const { return width_; }
    int getHeight() const { return height_; }

    void beginFrame();
    void endFrame();

    void setCamera(const Vector2& center, float zoom = 1.0f);
    const Vector2& getCameraPosition() const { return cameraPos_; }

    ShaderProgram& getShader() { return defaultShader_; }
    const Matrix4& getViewProjection() const { return viewProjection_; }

    uint32_t getTexture(const std::string& textureName);
    std::shared_ptr<Model> getModel(const std::string& modelName);

    void recordDrawCall() { drawCallCount_++; }
    size_t getDrawCallCount() const { return drawCallCount_; }

    void recordTriangles(size_t count) { triangleCount_ += count; }
    size_t getTriangleCount() const { return triangleCount_; }

private:
    RenderingContext() = default;

    int width_{1280};
    int height_{720};

    Vector2 cameraPos_{3535.16f, 407.5f};
    Matrix4 projection_;
    Matrix4 view_;
    Matrix4 viewProjection_;

    ShaderProgram defaultShader_;

    size_t drawCallCount_{0};
    size_t triangleCount_{0};

    std::unordered_map<std::string, TextureData> textureCache_;
    std::unordered_map<std::string, std::shared_ptr<Model>> modelCache_;
};

} // namespace caver

#endif // CAVER_RENDERING_CONTEXT_H
