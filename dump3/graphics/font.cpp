#include "caver/graphics/font.h"
#include "caver/resource/vfs.h"
#include <sstream>
#include <iostream>

namespace caver {

Font& Font::defaultFont() {
    static Font instance;
    if (!instance.loaded_) {
        instance.loadFnt("font_megalopolis_18_2x.fnt", "font_megalopolis_18_2x.tex.png");
    }
    return instance;
}

bool Font::loadFnt(const std::string& fntFilename, const std::string& texFilename) {
    texName_ = texFilename;
    auto textOpt = VFS::instance().readTextFile(fntFilename);
    if (!textOpt) {
        std::cerr << "[Font] Error: Could not read fnt file '" << fntFilename << "'" << std::endl;
        return false;
    }

    std::stringstream ss(*textOpt);
    std::string line;

    while (std::getline(ss, line)) {
        if (line.find("common ") == 0) {
            size_t swPos = line.find("scaleW=");
            size_t shPos = line.find("scaleH=");
            if (swPos != std::string::npos) sscanf(line.c_str() + swPos, "scaleW=%d", &texWidth_);
            if (shPos != std::string::npos) sscanf(line.c_str() + shPos, "scaleH=%d", &texHeight_);
        } else if (line.find("char ") == 0) {
            FontChar c;
            size_t idPos = line.find("id=");
            size_t xPos  = line.find("x=");
            size_t yPos  = line.find("y=");
            size_t wPos  = line.find("width=");
            size_t hPos  = line.find("height=");
            size_t xoPos = line.find("xoffset=");
            size_t yoPos = line.find("yoffset=");
            size_t xaPos = line.find("xadvance=");

            if (idPos != std::string::npos) sscanf(line.c_str() + idPos, "id=%d", &c.id);
            if (xPos  != std::string::npos) sscanf(line.c_str() + xPos,  "x=%f", &c.x);
            if (yPos  != std::string::npos) sscanf(line.c_str() + yPos,  "y=%f", &c.y);
            if (wPos  != std::string::npos) sscanf(line.c_str() + wPos,  "width=%f", &c.width);
            if (hPos  != std::string::npos) sscanf(line.c_str() + hPos,  "height=%f", &c.height);
            if (xoPos != std::string::npos) sscanf(line.c_str() + xoPos, "xoffset=%f", &c.xoffset);
            if (yoPos != std::string::npos) sscanf(line.c_str() + yoPos, "yoffset=%f", &c.yoffset);
            if (xaPos != std::string::npos) sscanf(line.c_str() + xaPos, "xadvance=%f", &c.xadvance);

            chars_[c.id] = c;
        }
    }

    loaded_ = true;
    std::cout << "[Font] Successfully loaded BMFont '" << fntFilename << "' with " << chars_.size() << " glyphs." << std::endl;
    return true;
}

Vector2 Font::getTextSize(const std::string& text, float scale) const {
    float curX = 0.0f;
    float maxH = 0.0f;
    for (char ch : text) {
        auto it = chars_.find(static_cast<int>(ch));
        if (it != chars_.end()) {
            const auto& c = it->second;
            curX += c.xadvance * scale;
            if (c.height * scale > maxH) maxH = c.height * scale;
        } else {
            curX += 12.0f * scale;
        }
    }
    return Vector2(curX, maxH);
}

void Font::renderText(RenderingContext& ctx, const std::string& text, const Vector2& pos, float scale, const FloatColor& color) {
    if (text.empty()) return;

    if (texId_ == 0 && !texName_.empty()) {
        texId_ = ctx.getTexture(texName_);
    }

    if (texId_ > 0) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, texId_);
        ctx.getShader().setUseTexture(true);
    } else {
        ctx.getShader().setUseTexture(false);
    }

    ctx.getShader().setColor(color);
    Matrix4 orthoProj = Matrix4::ortho(0.0f, static_cast<float>(ctx.getWidth()),
                                       0.0f, static_cast<float>(ctx.getHeight()),
                                       -100.0f, 100.0f);

    float curX = pos.x;
    float tw = static_cast<float>(texWidth_ > 0 ? texWidth_ : 512);
    float th = static_cast<float>(texHeight_ > 0 ? texHeight_ : 512);

    for (char ch : text) {
        auto it = chars_.find(static_cast<int>(ch));
        if (it == chars_.end()) {
            curX += 12.0f * scale;
            continue;
        }

        const auto& c = it->second;
        if (c.width <= 0 || c.height <= 0) {
            curX += c.xadvance * scale;
            continue;
        }

        float gx = curX + c.xoffset * scale;
        float gy = pos.y - (c.yoffset + c.height) * scale;
        float gw = c.width * scale;
        float gh = c.height * scale;

        float uMin = c.x / tw;
        float vMin = 1.0f - (c.y + c.height) / th;
        float uMax = (c.x + c.width) / tw;
        float vMax = 1.0f - c.y / th;

        std::vector<Vertex> verts = {
            {{gx,      gy,      0.0f}, {0, 0, 1}, {uMin, vMin}},
            {{gx + gw, gy,      0.0f}, {0, 0, 1}, {uMax, vMin}},
            {{gx + gw, gy + gh, 0.0f}, {0, 0, 1}, {uMax, vMax}},
            {{gx,      gy + gh, 0.0f}, {0, 0, 1}, {uMin, vMax}}
        };
        std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};

        Mesh charMesh;
        charMesh.uploadGLBuffers(verts, indices);

        Matrix4 identity;
        ctx.getShader().setMVP(orthoProj * identity);
        charMesh.draw();

        curX += c.xadvance * scale;
    }
}

} // namespace caver
