#include "caver/resource/model_library.h"

namespace caver {

ModelLibrary& ModelLibrary::sharedLibrary() {
    static ModelLibrary instance;
    return instance;
}

std::shared_ptr<Model> ModelLibrary::modelForName(const std::string& name) {
    if (name.empty()) return nullptr;

    auto it = cache_.find(name);
    if (it != cache_.end()) {
        return it->second;
    }

    auto model = PODLoader::loadModel(name);
    if (model) {
        cache_[name] = model;
    }
    return model;
}

void ModelLibrary::clearCache() {
    cache_.clear();
}

} // namespace caver
