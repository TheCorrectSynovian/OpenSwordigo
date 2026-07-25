#ifndef CAVER_VULKAN_RENDER_DEVICE_H
#define CAVER_VULKAN_RENDER_DEVICE_H

#include <caver/graphics/render_device.h>
#include <iostream>

namespace caver {

class VulkanRenderDevice : public IRenderDevice {
public:
    VulkanRenderDevice() = default;
    ~VulkanRenderDevice() override = default;

    bool init(int width, int height) override {
        std::cout << "[VulkanRenderDevice] Initializing Vulkan modern rendering backend architecture stub..." << std::endl;
        width_ = width;
        height_ = height;
        return true;
    }

    void setViewport(int x, int y, int width, int height) override {
        width_ = width;
        height_ = height;
    }

    void beginFrame(const FloatColor& clearColor = FloatColor(0.1f, 0.15f, 0.25f, 1.0f)) override {}
    void endFrame() override {}

    void setPipelineState(const PipelineState& state) override {}

    std::shared_ptr<IGPUBuffer> createBuffer(BufferType type, size_t size, const void* initialData = nullptr) override {
        return nullptr;
    }

    std::shared_ptr<IGPUTexture> createTexture(uint32_t width, uint32_t height, TextureFormat format, const void* pixelData) override {
        return nullptr;
    }

    std::shared_ptr<IGPUShader> createShader(const std::string& vertexSrc, const std::string& fragmentSrc) override {
        return nullptr;
    }

    void drawIndexed(const std::shared_ptr<IGPUBuffer>& vbo, const std::shared_ptr<IGPUBuffer>& ebo, size_t indexCount, IndexType indexType = IndexType::UInt16) override {}

private:
    int width_{1280};
    int height_{720};
};

} // namespace caver

#endif // CAVER_VULKAN_RENDER_DEVICE_H
