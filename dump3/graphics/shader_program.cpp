#include "caver/graphics/shader_program.h"
#include "caver/graphics/gl_inc.h"
#include <iostream>
#include <vector>
#include <SDL3/SDL_opengl.h>

namespace caver {

static uint32_t compileShader(uint32_t type, const std::string& src) {
    uint32_t shader = glCreateShader(type);
    const char* csrc = src.c_str();
    glShaderSource(shader, 1, &csrc, nullptr);
    glCompileShader(shader);

    int status = 0;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
    if (!status) {
        int logLen = 0;
        glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &logLen);
        std::vector<char> log(logLen);
        glGetShaderInfoLog(shader, logLen, nullptr, log.data());
        std::cerr << "[ShaderProgram] Error: Shader compile failure:\n" << log.data() << std::endl;
        glDeleteShader(shader);
        return 0;
    }
    return shader;
}

ShaderProgram::~ShaderProgram() {
    if (programId_) {
        glDeleteProgram(programId_);
    }
}

bool ShaderProgram::compile(const std::string& vertexSrc, const std::string& fragmentSrc) {
    uint32_t vs = compileShader(GL_VERTEX_SHADER, vertexSrc);
    uint32_t fs = compileShader(GL_FRAGMENT_SHADER, fragmentSrc);
    if (!vs || !fs) return false;

    programId_ = glCreateProgram();
    glAttachShader(programId_, vs);
    glAttachShader(programId_, fs);

    glBindAttribLocation(programId_, 0, "aPosition");
    glBindAttribLocation(programId_, 1, "aNormal");
    glBindAttribLocation(programId_, 2, "aTexCoord");

    glLinkProgram(programId_);

    glDeleteShader(vs);
    glDeleteShader(fs);

    int status = 0;
    glGetProgramiv(programId_, GL_LINK_STATUS, &status);
    if (!status) {
        int logLen = 0;
        glGetProgramiv(programId_, GL_INFO_LOG_LENGTH, &logLen);
        std::vector<char> log(logLen);
        glGetProgramInfoLog(programId_, logLen, nullptr, log.data());
        std::cerr << "[ShaderProgram] Error: Program link failure:\n" << log.data() << std::endl;
        return false;
    }

    uMVPLoc_        = glGetUniformLocation(programId_, "uMVP");
    uColorLoc_      = glGetUniformLocation(programId_, "uColor");
    uUseTextureLoc_ = glGetUniformLocation(programId_, "uUseTexture");
    uTextureLoc_    = glGetUniformLocation(programId_, "uTexture");

    return true;
}

void ShaderProgram::use() const {
    if (programId_) {
        glUseProgram(programId_);
    }
}

void ShaderProgram::setMVP(const Matrix4& mvp) {
    if (uMVPLoc_ >= 0) {
        glUniformMatrix4fv(uMVPLoc_, 1, GL_FALSE, mvp.m);
    }
}

void ShaderProgram::setColor(const FloatColor& color) {
    if (uColorLoc_ >= 0) {
        glUniform4f(uColorLoc_, color.r, color.g, color.b, color.a);
    }
}

void ShaderProgram::setUseTexture(bool useTex) {
    if (uUseTextureLoc_ >= 0) {
        glUniform1i(uUseTextureLoc_, useTex ? 1 : 0);
    }
}

void ShaderProgram::setTextureUnit(int unit) {
    if (uTextureLoc_ >= 0) {
        glUniform1i(uTextureLoc_, unit);
    }
}

} // namespace caver
