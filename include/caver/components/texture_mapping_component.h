#ifndef CAVER_TEXTURE_MAPPING_COMPONENT_H
#define CAVER_TEXTURE_MAPPING_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/math/caver_math.h>
#include <string>

namespace caver {

class TextureMappingComponent : public Component {
public:
    std::string getClassName() const override { return "TextureMapping"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        for (const auto& f : msg.fields) {
            // Find any string field that looks like a texture name (contains .png, .pvr, .tex)
            if (!f.bytesVal.empty()) {
                std::string val(f.bytesVal.begin(), f.bytesVal.end());
                if (val.find(".png") != std::string::npos || val.find(".pvr") != std::string::npos || val.find(".tex") != std::string::npos) {
                    textureName_ = val;
                }
            }
            
            // Check nested messages for texture names (extension fields)
            if (f.wireType == WireType::LengthDelimited && !f.bytesVal.empty() && f.fieldNumber > 100) {
                ProtoMessage extMsg;
                if (extMsg.parseFromBytes(f.bytesVal.data(), f.bytesVal.size())) {
                    for (const auto& ef : extMsg.fields) {
                        if (!ef.bytesVal.empty()) {
                            std::string val(ef.bytesVal.begin(), ef.bytesVal.end());
                            if (val.find(".png") != std::string::npos || val.find(".pvr") != std::string::npos || val.find(".tex") != std::string::npos) {
                                textureName_ = val;
                            }
                        }
                    }
                }
            }
        }
    }

    const std::string& getTextureName() const { return textureName_; }
    const Vector2& getScale() const { return scale_; }
    int getLayer() const { return layer_; }

private:
    std::string textureName_;
    Vector2 scale_{1.0f, 1.0f};
    int layer_{0};
};

} // namespace caver

#endif // CAVER_TEXTURE_MAPPING_COMPONENT_H
