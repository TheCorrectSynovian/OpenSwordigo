#include "caver/graphics/rendering_context.h"
#include "caver/graphics/gl_inc.h"
#include "caver/resource/vfs.h"
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
    projection_ = Matrix4::perspectiveFov(20.0f, aspect, 50.0f, 20000.0f);

    setCamera(Vector2(3535.16f, 407.499f));
}

void RenderingContext::setCamera(const Vector2& center, float zoom) {
    cameraPos_ = center;
    float camZ = 2835.6f / (zoom > 0.0001f ? zoom : 1.0f);
    Vector3 eye(center.x, center.y, camZ);
    Vector3 target(center.x, center.y, 0.0f);
    Vector3 up(0.0f, 1.0f, 0.0f);

    view_ = Matrix4::lookAt(eye, target, up);
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

    std::vector<std::string> candidates;
    candidates.push_back(textureName);

    // Strip existing extension if present
    std::string stem = textureName;
    std::string ext = "";
    size_t dotPos = textureName.rfind('.');
    if (dotPos != std::string::npos) {
        stem = textureName.substr(0, dotPos);
        ext = textureName.substr(dotPos);
    }

    if (stem.size() > 3 && stem.substr(stem.size() - 3) == "_2x") {
        std::string baseStem = stem.substr(0, stem.size() - 3);
        candidates.push_back(baseStem + ext);
    } else {
        candidates.push_back(stem + "_2x" + ext);
        candidates.push_back(stem + "_2x.pvr");
        candidates.push_back(stem + "_2x.tex.png");
        candidates.push_back(stem + "_2x.png");
    }

    candidates.push_back(stem + ".pvr");
    candidates.push_back(stem + ".tex.png");
    candidates.push_back(stem + ".png");
    candidates.push_back(stem + ".tex");

    std::optional<std::vector<uint8_t>> data;
    std::string matchedPath;

    for (const auto& cand : candidates) {
        data = VFS::instance().readFile(cand);
        if (data && !data->empty()) {
            matchedPath = cand;
            break;
        }
    }

    uint32_t texId = 0;
    int w = 0, h = 0;
    if (data && !data->empty()) {
        texId = pvr_load_texture_from_memory(data->data(), data->size(), &w, &h);
    }

    TextureData tex;
    tex.name = textureName;
    tex.glTextureId = texId;
    tex.width = w;
    tex.height = h;

    textureCache_[textureName] = tex;
    if (texId != 0) {
        std::cout << "[RenderingContext] Loaded texture '" << textureName << "' (via " << matchedPath << ", " << w << "x" << h << ") -> GL ID " << texId << std::endl;
    } else {
        std::cerr << "[RenderingContext] Failed to load texture '" << textureName << "'" << std::endl;
    }
    return texId;
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
