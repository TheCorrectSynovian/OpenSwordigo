#ifndef CAVER_SHADER_PROGRAM_H
#define CAVER_SHADER_PROGRAM_H

#include <string>
#include <caver/math/caver_math.h>

namespace caver {

class ShaderProgram {
public:
    ShaderProgram() = default;
    ~ShaderProgram();

    bool compile(const std::string& vertexSrc, const std::string& fragmentSrc);
    void use() const;

    uint32_t getProgramId() const { return programId_; }

    void setMVP(const Matrix4& mvp);
    void setColor(const FloatColor& color);
    void setUseTexture(bool useTex);
    void setTextureUnit(int unit);

private:
    uint32_t programId_{0};
    int uMVPLoc_{-1};
    int uColorLoc_{-1};
    int uUseTextureLoc_{-1};
    int uTextureLoc_{-1};
};

} // namespace caver

#endif // CAVER_SHADER_PROGRAM_H
