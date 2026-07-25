#ifndef CAVER_GL_RENDER_DEVICE_H
#define CAVER_GL_RENDER_DEVICE_H

#include <caver/graphics/render_device.h>
#include <caver/graphics/gl_inc.h>

namespace caver {

class GLBuffer : public IGPUBuffer {
public:
    GLBuffer(BufferType type, size_t size, const void* data);
    ~GLBuffer() override;

    void updateData(const void* data, size_t size) override;
    size_t getSize() const override { return size_; }

    GLuint getID() const { return id_; }
    GLenum getTarget() const { return target_; }

private:
    GLuint id_{0};
    GLenum target_{GL_ARRAY_BUFFER};
    size_t size_{0};
};

class GLTexture : public IGPUTexture {
public:
    GLTexture(uint32_t width, uint32_t height, TextureFormat format, const void* data);
    ~GLTexture() override;

    uint32_t getWidth() const override { return width_; }
    uint32_t getHeight() const override { return height_; }
    TextureFormat getFormat() const override { return format_; }
    void bind(uint32_t slot = 0) override;

    GLuint getID() const { return id_; }

private:
    GLuint id_{0};
    uint32_t width_{0};
    uint32_t height_{0};
    TextureFormat format_{TextureFormat::RGBA8};
};

class GLShader : public IGPUShader {
public:
    GLShader(const std::string& vsSrc, const std::string& fsSrc);
    ~GLShader() override;

    bool isCompiled() const override { return compiled_; }
    void bind() override;

    void setUniformMatrix4(const std::string& name, const Matrix4& mat) override;
    void setUniformVector4(const std::string& name, const FloatColor& col) override;
    void setUniformInt(const std::string& name, int val) override;

private:
    GLuint program_{0};
    bool compiled_{false};
};

class GLRenderDevice : public IRenderDevice {
public:
    GLRenderDevice() = default;
    ~GLRenderDevice() override = default;

    bool init(int width, int height) override;
    void setViewport(int x, int y, int width, int height) override;

    void beginFrame(const FloatColor& clearColor = FloatColor(0.1f, 0.15f, 0.25f, 1.0f)) override;
    void endFrame() override;

    void setPipelineState(const PipelineState& state) override;

    std::shared_ptr<IGPUBuffer> createBuffer(BufferType type, size_t size, const void* initialData = nullptr) override;
    std::shared_ptr<IGPUTexture> createTexture(uint32_t width, uint32_t height, TextureFormat format, const void* pixelData) override;
    std::shared_ptr<IGPUShader> createShader(const std::string& vertexSrc, const std::string& fragmentSrc) override;

    void drawIndexed(const std::shared_ptr<IGPUBuffer>& vbo, const std::shared_ptr<IGPUBuffer>& ebo, size_t indexCount, IndexType indexType = IndexType::UInt16) override;

private:
    int width_{1280};
    int height_{720};
    PipelineState currentState_;
};

} // namespace caver

#endif // CAVER_GL_RENDER_DEVICE_H
