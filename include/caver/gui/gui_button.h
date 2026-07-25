#ifndef CAVER_GUI_BUTTON_H
#define CAVER_GUI_BUTTON_H

#include <caver/gui/gui_frame_view.h>
#include <functional>

namespace caver {

class GUIButton : public GUIFrameView {
public:
    using OnClickListener = std::function<void()>;

    GUIButton() = default;

    void setOnClickListener(OnClickListener listener) {
        onClickListener_ = std::move(listener);
    }

    bool handleInput(const Vector2& mousePos, bool isClick) override;

private:
    OnClickListener onClickListener_;
    bool hovered_{false};
};

} // namespace caver

#endif // CAVER_GUI_BUTTON_H
