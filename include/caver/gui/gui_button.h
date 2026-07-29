#ifndef CAVER_GUI_BUTTON_H
#define CAVER_GUI_BUTTON_H

#include <caver/gui/gui_frame_view.h>
#include <caver/gui/gui_rounded_rect.h>
#include <caver/gui/gui_textured_rect.h>
#include <caver/gui/gui_label.h>
#include <functional>
#include <memory>

namespace caver {

class GUIButton : public GUIFrameView {
public:
    using OnClickListener = std::function<void()>;

    GUIButton();

    void setTitle(const std::string& title) {
        title_ = title;
    }

    virtual void setTextureName(const std::string& name) {
        GUIFrameView::setTextureName(name);
        if (backgroundRect_) {
            backgroundRect_->setTextureName(name);
        }
    }

    const std::string& getTitle() const {
        return title_;
    }

    void setOnClickListener(OnClickListener listener) {
        onClickListener_ = std::move(listener);
    }

    bool handleInput(const Vector2& mousePos, bool isClick) override;
    void render(RenderingContext& ctx) override;

private:
    std::string title_;
    OnClickListener onClickListener_;
    bool hovered_{false};

    std::shared_ptr<GUIRoundedRect> backgroundRect_;
    std::shared_ptr<GUITexturedRect> iconRect_;
    std::shared_ptr<GUILabel> titleLabel_;
};

} // namespace caver

#endif // CAVER_GUI_BUTTON_H
