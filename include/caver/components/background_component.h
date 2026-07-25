#ifndef CAVER_BACKGROUND_COMPONENT_H
#define CAVER_BACKGROUND_COMPONENT_H

#include <caver/scene/component.h>
#include <caver/graphics/rendering_context.h>
#include <caver/graphics/pod_loader.h>
#include <functional>

namespace caver {

class BackgroundComponent : public Component {
public:
    std::string getClassName() const override { return "BackgroundComponent"; }

    void loadFromProtobuf(const ProtoMessage& msg) override {
        Component::loadFromProtobuf(msg);
        std::string candidate = msg.getString(1);
        if (!candidate.empty() && candidate != "Background" && candidate != "BackgroundComponent") {
            textureName_ = candidate;
        }

        if (textureName_.empty()) {
            std::function<void(const ProtoMessage&)> scanMsg = [&](const ProtoMessage& m) {
                for (const auto& f : m.fields) {
                    if (!f.bytesVal.empty()) {
                        std::string val(f.bytesVal.begin(), f.bytesVal.end());
                        if (val.find(".pvr") != std::string::npos || val.find(".png") != std::string::npos || val.find(".tex") != std::string::npos) {
                            textureName_ = val;
                            return;
                        }
                        ProtoMessage sub;
                        if (sub.parseFromBytes(f.bytesVal.data(), f.bytesVal.size()) && !sub.fields.empty()) {
                            scanMsg(sub);
                            if (!textureName_.empty()) return;
                        }
                    }
                }
            };
            scanMsg(msg);
        }
    }

    void render(RenderingContext& ctx) override;

private:
    std::string textureName_;
    uint32_t textureId_{0};
    std::shared_ptr<Mesh> bgQuad_;
};

} // namespace caver

#endif // CAVER_BACKGROUND_COMPONENT_H
