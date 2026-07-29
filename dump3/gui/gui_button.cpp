#include "caver/gui/gui_button.h"
#include <iostream>

namespace caver {

GUIButton::GUIButton() {
    backgroundRect_ = std::make_shared<GUIRoundedRect>();
    iconRect_ = std::make_shared<GUITexturedRect>();
    titleLabel_ = std::make_shared<GUILabel>();
}

bool GUIButton::handleInput(const Vector2& mousePos, bool isClick) {
    if (!visible_) return false;

    float minX = position_.x - size_.x * 0.5f;
    float maxX = position_.x + size_.x * 0.5f;
    float minY = position_.y - size_.y * 0.5f;
    float maxY = position_.y + size_.y * 0.5f;

    bool contains = (mousePos.x >= minX && mousePos.x <= maxX &&
                     mousePos.y >= minY && mousePos.y <= maxY);

    hovered_ = contains;

    if (contains && isClick) {
        if (onClickListener_) {
            onClickListener_();
        }
        return true;
    }

    return GUIFrameView::handleInput(mousePos, isClick);
}

void GUIButton::render(RenderingContext& ctx) {
    if (!visible_) return;

    Matrix4 orthoProj = Matrix4::ortho(0.0f, static_cast<float>(ctx.getWidth()),
                                       0.0f, static_cast<float>(ctx.getHeight()),
                                       -100.0f, 100.0f);

    float halfW = size_.x * 0.5f;
    float halfH = size_.y * 0.5f;
    
    static int logCount = 0;
    if (logCount++ % 60 == 0) {
        std::cout << "[GUIButton] rendering at " << position_.x << ", " << position_.y << " bounds: " << size_.x << "x" << size_.y << std::endl;
    }

    Rectangle bounds(position_.x - halfW, position_.y - halfH, size_.x, size_.y);

    // Setup matrices
    ctx.getShader().setMVP(orthoProj);

    // Color Tinting logic as per IDA
    FloatColor tint = hovered_ ? FloatColor(0.8f, 0.9f, 1.0f, 1.0f) : FloatColor(1.0f, 1.0f, 1.0f, 1.0f);

    // Draw Background
    if (backgroundRect_) {
        backgroundRect_->createWithOuterBounds(bounds);
        backgroundRect_->setColor(tint);
        backgroundRect_->draw(ctx);
    }

    // Draw Icon if any
    if (iconRect_) {
        // ... (Icon logic could go here)
    }

    // Draw Label
    if (titleLabel_ && !title_.empty()) {
        titleLabel_->setText(title_);
        titleLabel_->setPosition(Vector2(position_.x - halfW + 20.0f, position_.y + 10.0f)); // Left aligned with padding
        titleLabel_->setScale(1.1f);
        titleLabel_->setColor(FloatColor(1.0f, 1.0f, 1.0f, 1.0f));
        titleLabel_->updateText();
        titleLabel_->draw(ctx);
    }
}

} // namespace caver
