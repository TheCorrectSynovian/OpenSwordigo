#include "caver/components/background_component.h"
#include "caver/scene/scene_object.h"
#include "caver/graphics/gl_inc.h"

namespace caver {

void BackgroundComponent::render(RenderingContext& ctx) {
    // Full-screen sky backdrop is handled cleanly by Scene::render()
    return;
}

} // namespace caver
