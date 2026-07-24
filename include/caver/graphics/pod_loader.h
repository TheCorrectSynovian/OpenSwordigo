#ifndef CAVER_POD_LOADER_H
#define CAVER_POD_LOADER_H

#include <string>
#include <vector>
#include <memory>
#include <cstdint>
#include <caver/math/caver_math.h>

namespace caver {

struct Vertex {
    Vector3 position{0, 0, 0};
    Vector3 normal{0, 0, 1};
    Vector2 uv{0, 0};
};

class Mesh {
public:
    Mesh() = default;
    ~Mesh();

    void uploadGLBuffers(const std::vector<Vertex>& vertices, const std::vector<uint16_t>& indices);
    void draw(bool useVAO = true) const;

    uint32_t getVAO() const { return vao_; }
    uint32_t getVBO() const { return vbo_; }
    uint32_t getEBO() const { return ebo_; }
    size_t getIndexCount() const { return indexCount_; }
    size_t getTriangleCount() const { return indexCount_ / 3; }

private:
    uint32_t vao_{0};
    uint32_t vbo_{0};
    uint32_t ebo_{0};
    size_t indexCount_{0};
};

class Model {
public:
    Model() = default;

    const std::string& getName() const { return name_; }
    void setName(const std::string& name) { name_ = name; }

    void addMesh(std::shared_ptr<Mesh> mesh) { meshes_.push_back(std::move(mesh)); }
    const std::vector<std::shared_ptr<Mesh>>& getMeshes() const { return meshes_; }

    void draw(bool useVAO = true) const {
        for (const auto& mesh : meshes_) {
            mesh->draw(useVAO);
        }
    }

private:
    std::string name_;
    std::vector<std::shared_ptr<Mesh>> meshes_;
};

class PODLoader {
public:
    static std::shared_ptr<Model> loadModel(const std::string& filename);
};

} // namespace caver

#endif // CAVER_POD_LOADER_H
