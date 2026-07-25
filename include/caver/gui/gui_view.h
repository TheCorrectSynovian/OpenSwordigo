#ifndef CAVER_GUI_VIEW_H
#define CAVER_GUI_VIEW_H

#include <caver/math/caver_math.h>
#include <caver/graphics/rendering_context.h>
#include <vector>
#include <memory>
#include <string>

namespace caver {

class GUIView : public std::enable_shared_from_this<GUIView> {
public:
    GUIView() = default;
    virtual ~GUIView() = default;

    void setFrame(const Vector2& pos, const Vector2& size) {
        position_ = pos;
        size_ = size;
    }

    const Vector2& getPosition() const { return position_; }
    const Vector2& getSize() const { return size_; }

    void addSubView(std::shared_ptr<GUIView> child) {
        if (!child) return;
        child->parent_ = shared_from_this();
        children_.push_back(child);
    }

    virtual bool handleInput(const Vector2& mousePos, bool isClick);
    virtual void update(float dt);
    virtual void render(RenderingContext& ctx);

    bool isVisible() const { return visible_; }
    void setVisible(bool v) { visible_ = v; }

protected:
    Vector2 position_{0.0f, 0.0f};
    Vector2 size_{100.0f, 100.0f};
    bool visible_{true};
    std::weak_ptr<GUIView> parent_;
    std::vector<std::shared_ptr<GUIView>> children_;
};

} // namespace caver

#endif // CAVER_GUI_VIEW_H
