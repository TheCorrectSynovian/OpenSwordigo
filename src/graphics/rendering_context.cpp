#include "caver/graphics/rendering_context.h"
#include "caver/graphics/gl_inc.h"
#include <iostream>

namespace caver {

RenderingContext& RenderingContext::instance() {
    static RenderingContext instance;
    return instance;
}

void RenderingContext::printGLDiagnostics() const {
    const char* vendor   = (const char*)glGetString(GL_VENDOR);
    const char* renderer = (const char*)glGetString(GL_RENDERER);
    const char* version  = (const char*)glGetString(GL_VERSION);
    const char* glslVer  = (const char*)glGetString(GL_SHADING_LANGUAGE_VERSION);

    std::cout << "========================================================\n";
    std::cout << " OpenGL Runtime Diagnostics:\n";
    std::cout << " Vendor:    " << (vendor ? vendor : "Unknown") << "\n";
    std::cout << " Renderer:  " << (renderer ? renderer : "Unknown") << "\n";
    std::cout << " Version:   " << (version ? version : "Unknown") << "\n";
    std::cout << " GLSL Ver:  " << (glslVer ? glslVer : "Unknown") << "\n";
    std::cout << "========================================================\n";
}

bool RenderingContext::initGL(int viewportWidth, int viewportHeight) {
    setViewport(viewportWidth, viewportHeight);
    printGLDiagnostics();

    std::string vsSrc =
"#version 100\n"
"attribute vec3 aPosition;\n"
"attribute vec3 aNormal;\n"
"attribute vec2 aTexCoord;\n"
"varying vec2 vTexCoord;\n"
"uniform mat4 uMVP;\n"
"void main() {\n"
"    vTexCoord = aTexCoord;\n"
"    gl_Position = uMVP * vec4(aPosition, 1.0);\n"
"}\n";

    std::string fsSrc =
"#version 100\n"
"precision mediump float;\n"
"varying vec2 vTexCoord;\n"
"uniform sampler2D uTexture;\n"
"uniform vec4 uColor;\n"
"uniform bool uUseTexture;\n"
"void main() {\n"
"    if (uUseTexture) {\n"
"        gl_FragColor = texture2D(uTexture, vTexCoord) * uColor;\n"
"    } else {\n"
"        gl_FragColor = uColor;\n"
"    }\n"
"}\n";

    if (!defaultShader_.compile(vsSrc, fsSrc)) {
        std::cerr << "[RenderingContext] Error compiling default GLES2 shaders." << std::endl;
        return false;
    }

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    std::cout << "[RenderingContext] Initialized GL pipeline (" << width_ << "x" << height_ << ")." << std::endl;
    return true;
}

void RenderingContext::setViewport(int width, int height) {
    width_ = width;
    height_ = height;
    glViewport(0, 0, width, height);

    float aspect = (height > 0) ? (float)width / (float)height : 1.0f;
    float halfH = 500.0f;
    float halfW = halfH * aspect;

    projection_ = Matrix4::identity();
    projection_.m[0]  = 1.0f / halfW;
    projection_.m[5]  = 1.0f / halfH;
    projection_.m[10] = -1.0f / 2000.0f;

    setCamera(Vector2(0, 0));
}

void RenderingContext::setCamera(const Vector2& center, float zoom) {
    view_ = Matrix4::translation(Vector3(-center.x, -center.y, 0.0f));
    if (zoom != 1.0f && zoom > 0.0001f) {
        view_ = Matrix4::scale(Vector3(zoom, zoom, 1.0f)) * view_;
    }
    viewProjection_ = projection_ * view_;
}

void RenderingContext::beginFrame() {
    drawCallCount_ = 0;
    triangleCount_ = 0;
    glClearColor(0.08f, 0.1f, 0.15f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    defaultShader_.use();
    defaultShader_.setTextureUnit(0);
    defaultShader_.setColor(FloatColor(1, 1, 1, 1));
}

void RenderingContext::endFrame() {
    // End frame pass
}

uint32_t RenderingContext::getTexture(const std::string& textureName) {
    if (textureName.empty()) return 0;
    auto it = textureCache_.find(textureName);
    if (it != textureCache_.end()) {
        return it->second.glTextureId;
    }

    TextureData tex = PVRTextureLoader::loadTexture(textureName);
    textureCache_[textureName] = tex;
    return tex.glTextureId;
}

std::shared_ptr<Model> RenderingContext::getModel(const std::string& modelName) {
    if (modelName.empty()) return nullptr;
    auto it = modelCache_.find(modelName);
    if (it != modelCache_.end()) {
        return it->second;
    }

    auto model = PODLoader::loadModel(modelName);
    modelCache_[modelName] = model;
    return model;
}

} // namespace caver
