#ifndef CAVER_TEXTURE_MAPPING_COMPONENT_H
#define CAVER_TEXTURE_MAPPING_COMPONENT_H

#include <caver/scene/component.h>
#include <string>

namespace caver {

class TextureMappingComponent : public Component {
public:
    std::string getClassName() const override { return "TextureMapping"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        for (const auto& f : msg.fields) {
            if (!f.bytesVal.empty()) {
                std::string val(f.bytesVal.begin(), f.bytesVal.end());
                if (val.find(".png") != std::string::npos || val.find(".pvr") != std::string::npos || val.find(".tex") != std::string::npos) {
                    textureName_ = val;
                    break;
                }
            }
        }
    }

    const std::string& getTextureName() const { return textureName_; }

private:
    std::string textureName_;
};

} // namespace caver

#endif // CAVER_TEXTURE_MAPPING_COMPONENT_H
