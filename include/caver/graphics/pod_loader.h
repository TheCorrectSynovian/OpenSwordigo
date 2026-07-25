#ifndef CAVER_POD_LOADER_H
#define CAVER_POD_LOADER_H

#include <string>
#include <vector>
#include <memory>
#include <cstdint>
#include <caver/math/caver_math.h>

namespace av {

struct PODMesh {
    std::vector<float>    positions;   // flat xyz, 3 floats per vertex
    std::vector<float>    normals;     // flat xyz, 3 floats per vertex
    std::vector<float>    uvs;         // flat uv,  2 floats per vertex
    std::vector<uint16_t> indices;     // triangle indices

    std::vector<float>    bone_indices;
    std::vector<float>    bone_weights;
    int                   bones_per_vertex = 0;

    struct BoneBatch {
        std::vector<uint32_t> indices;
        std::vector<uint32_t> counts;
        std::vector<uint32_t> offsets;
        int                   max_bones = 0;
        int                   count = 0;
    };
    BoneBatch bone_batches;
    bool has_bone_batches = false;

    int num_vertices = 0;
    int num_faces    = 0;

    float min_x =  1e9f, min_y =  1e9f, min_z =  1e9f;
    float max_x = -1e9f, max_y = -1e9f, max_z = -1e9f;
};

struct PODMaterial {
    std::string name;
    int diffuse_texture_index = -1;
};

struct PODNode {
    std::string name;
    int object_index   = -1;
    int parent_index   = -1;
    int material_index = -1;

    bool has_matrix = false;
    float matrix[16] = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};

    bool has_translation = false;
    float translation[3] = {0,0,0};

    bool has_rotation = false;
    float rotation[4] = {0,0,0,1};

    bool has_scale = false;
    float scale[3] = {1,1,1};

    std::vector<float> anim_translation;
    std::vector<float> anim_rotation;
    std::vector<float> anim_scale;
    std::vector<float> anim_matrix;

    std::vector<uint32_t> anim_translation_idx;
    std::vector<uint32_t> anim_rotation_idx;
    std::vector<uint32_t> anim_scale_idx;
    std::vector<uint32_t> anim_matrix_idx;

    uint32_t anim_flags = 0;
};

struct PODModel {
    std::vector<PODMesh>     meshes;
    std::vector<PODNode>     nodes;
    std::vector<PODMaterial> materials;
    std::vector<std::string> texture_filenames;

    std::string version;
    int num_frames     = 0;
    int num_mesh_nodes = 0;

    float center_x = 0, center_y = 0, center_z = 0;
    float radius   = 1.0f;

    int total_vertices = 0;
    int total_faces    = 0;

    float min_x =  1e9f, min_y =  1e9f, min_z =  1e9f;
    float max_x = -1e9f, max_y = -1e9f, max_z = -1e9f;
};

PODModel pod_load(const std::string& path);
PODModel pod_parse(const uint8_t* data, size_t size);
void get_node_matrix(const PODModel& model, int node_idx, int frame, float* mOut);

} // namespace av

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

    void setTextureName(const std::string& name) { textureName_ = name; }
    const std::string& getTextureName() const { return textureName_; }

    void uploadGLBuffers(const std::vector<Vertex>& vertices, const std::vector<uint16_t>& indices);
    void draw(bool useVAO = true) const;

    uint32_t getVAO() const { return vao_; }
    uint32_t getVBO() const { return vbo_; }
    uint32_t getEBO() const { return ebo_; }
    size_t getIndexCount() const { return indexCount_; }
    size_t getTriangleCount() const { return indexCount_ / 3; }

private:
    std::string textureName_;
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
