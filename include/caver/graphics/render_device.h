#ifndef CAVER_RENDER_DEVICE_H
#define CAVER_RENDER_DEVICE_H

#include <memory>
#include <string>
#include <vector>
#include <caver/math/caver_math.h>

namespace caver {

enum class BufferType {
    VertexBuffer,
    IndexBuffer,
    UniformBuffer
};

enum class TextureFormat {
    RGBA8,
    RGB8,
    ETC1,
    PVRTC1_4BPP,
    PVRTC1_2BPP
};

enum class IndexType {
    UInt16,
    UInt32
};

struct PipelineState {
    bool depthTest{true};
    bool depthWrite{true};
    bool blend{true};
    bool cullFace{true};
};

class IGPUBuffer {
public:
    virtual ~IGPUBuffer() = default;
    virtual void updateData(const void* data, size_t size) = 0;
    virtual size_t getSize() const = 0;
};

class IGPUTexture {
public:
    virtual ~IGPUTexture() = default;
    virtual uint32_t getWidth() const = 0;
    virtual uint32_t getHeight() const = 0;
    virtual TextureFormat getFormat() const = 0;
    virtual void bind(uint32_t slot = 0) = 0;
};

class IGPUShader {
public:
    virtual ~IGPUShader() = default;
    virtual bool isCompiled() const = 0;
    virtual void bind() = 0;
    virtual void setUniformMatrix4(const std::string& name, const Matrix4& mat) = 0;
    virtual void setUniformVector4(const std::string& name, const FloatColor& col) = 0;
    virtual void setUniformInt(const std::string& name, int val) = 0;
};

class IRenderDevice {
public:
    virtual ~IRenderDevice() = default;

    virtual bool init(int width, int height) = 0;
    virtual void setViewport(int x, int y, int width, int height) = 0;

    virtual void beginFrame(const FloatColor& clearColor = FloatColor(0.1f, 0.15f, 0.25f, 1.0f)) = 0;
    virtual void endFrame() = 0;

    virtual void setPipelineState(const PipelineState& state) = 0;

    virtual std::shared_ptr<IGPUBuffer> createBuffer(BufferType type, size_t size, const void* initialData = nullptr) = 0;
    virtual std::shared_ptr<IGPUTexture> createTexture(uint32_t width, uint32_t height, TextureFormat format, const void* pixelData) = 0;
    virtual std::shared_ptr<IGPUShader> createShader(const std::string& vertexSrc, const std::string& fragmentSrc) = 0;

    virtual void drawIndexed(const std::shared_ptr<IGPUBuffer>& vbo, const std::shared_ptr<IGPUBuffer>& ebo, size_t indexCount, IndexType indexType = IndexType::UInt16) = 0;
};

// Global RenderDevice factory & access
class RenderDevice {
public:
    static IRenderDevice& get();
    static void setInstance(std::unique_ptr<IRenderDevice> device);
};

} // namespace caver

#endif // CAVER_RENDER_DEVICE_H
