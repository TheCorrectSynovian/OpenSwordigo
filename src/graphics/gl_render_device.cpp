#include <caver/graphics/gl_render_device.h>
#include <iostream>

namespace caver {

static std::unique_ptr<IRenderDevice> gRenderDeviceInstance;

IRenderDevice& RenderDevice::get() {
    if (!gRenderDeviceInstance) {
        gRenderDeviceInstance = std::make_unique<GLRenderDevice>();
    }
    return *gRenderDeviceInstance;
}

void RenderDevice::setInstance(std::unique_ptr<IRenderDevice> device) {
    gRenderDeviceInstance = std::move(device);
}

// GLBuffer Implementation
GLBuffer::GLBuffer(BufferType type, size_t size, const void* data) : size_(size) {
    target_ = (type == BufferType::IndexBuffer) ? GL_ELEMENT_ARRAY_BUFFER : GL_ARRAY_BUFFER;
    glGenBuffers(1, &id_);
    glBindBuffer(target_, id_);
    glBufferData(target_, size, data, GL_STATIC_DRAW);
    glBindBuffer(target_, 0);
}

GLBuffer::~GLBuffer() {
    if (id_ != 0) {
        glDeleteBuffers(1, &id_);
    }
}

void GLBuffer::updateData(const void* data, size_t size) {
    glBindBuffer(target_, id_);
    glBufferSubData(target_, 0, size, data);
    glBindBuffer(target_, 0);
}

// GLTexture Implementation
GLTexture::GLTexture(uint32_t width, uint32_t height, TextureFormat format, const void* data)
    : width_(width), height_(height), format_(format) {
    glGenTextures(1, &id_);
    glBindTexture(GL_TEXTURE_2D, id_);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    if (data) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    glBindTexture(GL_TEXTURE_2D, 0);
}

GLTexture::~GLTexture() {
    if (id_ != 0) {
        glDeleteTextures(1, &id_);
    }
}

void GLTexture::bind(uint32_t slot) {
    glActiveTexture(GL_TEXTURE0 + slot);
    glBindTexture(GL_TEXTURE_2D, id_);
}

// GLShader Implementation
GLShader::GLShader(const std::string& vsSrc, const std::string& fsSrc) {
    GLuint vs = glCreateShader(GL_VERTEX_SHADER);
    const char* vsCStr = vsSrc.c_str();
    glShaderSource(vs, 1, &vsCStr, nullptr);
    glCompileShader(vs);

    GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
    const char* fsCStr = fsSrc.c_str();
    glShaderSource(fs, 1, &fsCStr, nullptr);
    glCompileShader(fs);

    program_ = glCreateProgram();
    glAttachShader(program_, vs);
    glAttachShader(program_, fs);
    glLinkProgram(program_);

    glDeleteShader(vs);
    glDeleteShader(fs);

    compiled_ = true;
}

GLShader::~GLShader() {
    if (program_ != 0) {
        glDeleteProgram(program_);
    }
}

void GLShader::bind() {
    glUseProgram(program_);
}

void GLShader::setUniformMatrix4(const std::string& name, const Matrix4& mat) {
    GLint loc = glGetUniformLocation(program_, name.c_str());
    if (loc >= 0) {
        glUniformMatrix4fv(loc, 1, GL_FALSE, mat.m);
    }
}

void GLShader::setUniformVector4(const std::string& name, const FloatColor& col) {
    GLint loc = glGetUniformLocation(program_, name.c_str());
    if (loc >= 0) {
        glUniform4f(loc, col.r, col.g, col.b, col.a);
    }
}

void GLShader::setUniformInt(const std::string& name, int val) {
    GLint loc = glGetUniformLocation(program_, name.c_str());
    if (loc >= 0) {
        glUniform1i(loc, val);
    }
}

// GLRenderDevice Implementation
bool GLRenderDevice::init(int width, int height) {
    width_ = width;
    height_ = height;
    glViewport(0, 0, width, height);

    setPipelineState(PipelineState());
    return true;
}

void GLRenderDevice::setViewport(int x, int y, int width, int height) {
    width_ = width;
    height_ = height;
    glViewport(x, y, width, height);
}

void GLRenderDevice::beginFrame(const FloatColor& clearColor) {
    glClearColor(clearColor.r, clearColor.g, clearColor.b, clearColor.a);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void GLRenderDevice::endFrame() {
    // Swap window buffers is handled by application main loop
}

void GLRenderDevice::setPipelineState(const PipelineState& state) {
    currentState_ = state;

    if (state.depthTest) {
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LEQUAL);
    } else {
        glDisable(GL_DEPTH_TEST);
    }

    glDepthMask(state.depthWrite ? GL_TRUE : GL_FALSE);

    if (state.blend) {
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    } else {
        glDisable(GL_BLEND);
    }

    if (state.cullFace) {
        glEnable(GL_CULL_FACE);
    } else {
        glDisable(GL_CULL_FACE);
    }
}

std::shared_ptr<IGPUBuffer> GLRenderDevice::createBuffer(BufferType type, size_t size, const void* initialData) {
    return std::make_shared<GLBuffer>(type, size, initialData);
}

std::shared_ptr<IGPUTexture> GLRenderDevice::createTexture(uint32_t width, uint32_t height, TextureFormat format, const void* pixelData) {
    return std::make_shared<GLTexture>(width, height, format, pixelData);
}

std::shared_ptr<IGPUShader> GLRenderDevice::createShader(const std::string& vertexSrc, const std::string& fragmentSrc) {
    return std::make_shared<GLShader>(vertexSrc, fragmentSrc);
}

void GLRenderDevice::drawIndexed(const std::shared_ptr<IGPUBuffer>& vbo, const std::shared_ptr<IGPUBuffer>& ebo, size_t indexCount, IndexType indexType) {
    if (!vbo || !ebo || indexCount == 0) return;

    auto glVBO = std::static_pointer_cast<GLBuffer>(vbo);
    auto glEBO = std::static_pointer_cast<GLBuffer>(ebo);

    glBindBuffer(GL_ARRAY_BUFFER, glVBO->getID());
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, glEBO->getID());

    GLenum type = (indexType == IndexType::UInt32) ? GL_UNSIGNED_INT : GL_UNSIGNED_SHORT;
    glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(indexCount), type, 0);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

} // namespace caver
