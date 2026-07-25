#ifndef CAVER_MODEL_LIBRARY_H
#define CAVER_MODEL_LIBRARY_H

#include <caver/graphics/pod_loader.h>
#include <string>
#include <unordered_map>
#include <memory>

namespace caver {

class ModelLibrary {
public:
    static ModelLibrary& sharedLibrary();

    std::shared_ptr<Model> modelForName(const std::string& name);
    void clearCache();

private:
    ModelLibrary() = default;
    std::unordered_map<std::string, std::shared_ptr<Model>> cache_;
};

} // namespace caver

#endif // CAVER_MODEL_LIBRARY_H
