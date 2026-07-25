#ifndef CAVER_GUI_FRAME_VIEW_H
#define CAVER_GUI_FRAME_VIEW_H

#include <caver/gui/gui_view.h>

namespace caver {

class GUIFrameView : public GUIView {
public:
    GUIFrameView() = default;

    void setTextureName(const std::string& texName) {
        textureName_ = texName;
        textureId_ = 0;
    }

    void render(RenderingContext& ctx) override;

private:
    std::string textureName_;
    uint32_t textureId_{0};
    std::shared_ptr<Mesh> quad_;
};

} // namespace caver

#endif // CAVER_GUI_FRAME_VIEW_H
