#include "caver/graphics/pod_loader.h"
#include "caver/graphics/rendering_context.h"
#include "caver/graphics/render_device.h"
#include "caver/graphics/gl_inc.h"
#include "caver/resource/vfs.h"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>

namespace av {

static constexpr uint32_t kEndTagMask = 0x80000000u;

static constexpr uint32_t eFormatVersion               = 1000;
static constexpr uint32_t eScene                        = 1001;

static constexpr uint32_t eSceneNumMeshes               = 2004;
static constexpr uint32_t eSceneNumNodes                = 2005;
static constexpr uint32_t eSceneNumMeshNodes            = 2006;
static constexpr uint32_t eSceneNumTextures             = 2007;
static constexpr uint32_t eSceneNumMaterials            = 2008;
static constexpr uint32_t eSceneNumFrames               = 2009;
static constexpr uint32_t eSceneMesh                    = 2012;
static constexpr uint32_t eSceneNode                    = 2013;
static constexpr uint32_t eSceneTexture                 = 2014;
static constexpr uint32_t eSceneMaterial                = 2015;

static constexpr uint32_t eMaterialName                 = 3000;
static constexpr uint32_t eMaterialDiffuseTextureIndex  = 3001;

static constexpr uint32_t eTextureFilename              = 4000;

static constexpr uint32_t eNodeIndex                    = 5000;
static constexpr uint32_t eNodeName                     = 5001;
static constexpr uint32_t eNodeMaterialIndex            = 5002;
static constexpr uint32_t eNodeParentIndex              = 5003;
static constexpr uint32_t eNodePosition                 = 5004;
static constexpr uint32_t eNodeRotation                 = 5005;
static constexpr uint32_t eNodeScale                    = 5006;
static constexpr uint32_t eNodeAnimationPosition        = 5007;
static constexpr uint32_t eNodeAnimationRotation        = 5008;
static constexpr uint32_t eNodeAnimationScale           = 5009;
static constexpr uint32_t eNodeMatrix                   = 5010;
static constexpr uint32_t eNodeAnimationMatrix           = 5011;
static constexpr uint32_t eNodeAnimationFlags            = 5012;
static constexpr uint32_t eNodeAnimationPositionIndex   = 5013;
static constexpr uint32_t eNodeAnimationRotationIndex   = 5014;
static constexpr uint32_t eNodeAnimationScaleIndex      = 5015;
static constexpr uint32_t eNodeAnimationMatrixIndex     = 5016;

static constexpr uint32_t eMeshNumVertices              = 6000;
static constexpr uint32_t eMeshNumFaces                 = 6001;
static constexpr uint32_t eMeshNumUVWChannels            = 6002;
static constexpr uint32_t eMeshVertexIndexList          = 6003;
static constexpr uint32_t eMeshVertexList               = 6006;
static constexpr uint32_t eMeshNormalList               = 6007;
static constexpr uint32_t eMeshUVWList                  = 6010;
static constexpr uint32_t eMeshBoneIndexList            = 6012;
static constexpr uint32_t eMeshBoneWeightList            = 6013;
static constexpr uint32_t eMeshInteravedDataList        = 6014;
static constexpr uint32_t eMeshBoneBatchIndexList       = 6015;
static constexpr uint32_t eMeshNumBoneIndicesPerBatch   = 6016;
static constexpr uint32_t eMeshBoneOffsetPerBatch       = 6017;
static constexpr uint32_t eMeshMaxNumBonesPerBatch      = 6018;
static constexpr uint32_t eMeshNumBoneBatches           = 6019;

static constexpr uint32_t eBlockDataType                = 9000;
static constexpr uint32_t eBlockNumComponents           = 9001;
static constexpr uint32_t eBlockStride                  = 9002;
static constexpr uint32_t eBlockData                    = 9003;

static uint32_t read_u32(const uint8_t* data, size_t size, size_t& off) {
    if (off + 4 > size) { off = size; return 0; }
    uint32_t val;
    std::memcpy(&val, data + off, 4);
    off += 4;
    return val;
}

static float read_float(const uint8_t* data, size_t size, size_t& off) {
    if (off + 4 > size) { off = size; return 0.0f; }
    float val;
    std::memcpy(&val, data + off, 4);
    off += 4;
    return val;
}

static std::vector<float> read_float_array(const uint8_t* data, size_t len, size_t& off) {
    std::vector<float> val(len / 4);
    if (len > 0) {
        std::memcpy(val.data(), data + off, len);
        off += len;
    }
    return val;
}

static std::vector<uint32_t> read_u32_array(const uint8_t* data, size_t len, size_t& off) {
    std::vector<uint32_t> val(len / 4);
    if (len > 0) {
        std::memcpy(val.data(), data + off, len);
        off += len;
    }
    return val;
}

struct DataElement {
    uint32_t type = 0;
    uint32_t num_components = 0;
    uint32_t stride = 0;
    const uint8_t* payload = nullptr;
    size_t payload_size = 0;
};

static void parse_vertex_block(const uint8_t* data, size_t size, size_t& off, uint32_t block_id, DataElement& out) {
    uint32_t end_tag = block_id | kEndTagMask;
    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) return;

        switch (tag) {
            case eBlockDataType:
                if (len >= 4) out.type = read_u32(data, size, off);
                else off += len;
                break;
            case eBlockNumComponents:
                if (len >= 4) out.num_components = read_u32(data, size, off);
                else off += len;
                break;
            case eBlockStride:
                if (len >= 4) out.stride = read_u32(data, size, off);
                else off += len;
                break;
            case eBlockData:
                out.payload = data + off;
                out.payload_size = len;
                off += len;
                break;
            default:
                off += len;
                break;
        }
    }
}

static std::vector<float> unpack_vertex_data(
    const uint8_t* interleaved_payload, size_t interleaved_size,
    const DataElement& de, int num_vertices, int num_components) 
{
    std::vector<float> result(num_vertices * num_components, 0.0f);
    if (num_vertices <= 0 || num_components <= 0) return result;

    const uint8_t* src_ptr = nullptr;
    const uint8_t* limit_ptr = nullptr;
    size_t stride = de.stride;

    if (interleaved_payload != nullptr) {
        uint32_t offset = 0;
        if (de.payload && de.payload_size >= 4) {
            std::memcpy(&offset, de.payload, 4);
        }
        if (offset >= interleaved_size) return result;
        src_ptr = interleaved_payload + offset;
        limit_ptr = interleaved_payload + interleaved_size;
    } else {
        src_ptr = de.payload;
        limit_ptr = de.payload ? (de.payload + de.payload_size) : nullptr;
    }

    if (!src_ptr || !limit_ptr) return result;

    uint32_t type = de.type;
    size_t comp_size = 4;
    if (type == 1) comp_size = 4;
    else if (type == 2 || type == 17) comp_size = 4;
    else if (type == 3 || type == 11 || type == 12 || type == 16) comp_size = 2;
    else if (type == 10 || type == 13 || type == 14 || type == 15) comp_size = 1;

    if (stride == 0) {
        stride = num_components * comp_size;
    }

    for (int i = 0; i < num_vertices; ++i) {
        const uint8_t* vert_ptr = src_ptr + i * stride;
        if (vert_ptr + stride > limit_ptr) break;

        for (int c = 0; c < num_components; ++c) {
            const uint8_t* comp_ptr = vert_ptr + c * comp_size;
            if (comp_ptr + comp_size > limit_ptr) continue;

            float val = 0.0f;
            if (type == 1) {
                std::memcpy(&val, comp_ptr, 4);
            } else if (type == 3) {
                uint16_t v; std::memcpy(&v, comp_ptr, 2);
                val = static_cast<float>(v);
            } else if (type == 16) {
                uint16_t v; std::memcpy(&v, comp_ptr, 2);
                val = static_cast<float>(v) / 65535.0f;
            } else if (type == 11) {
                int16_t v; std::memcpy(&v, comp_ptr, 2);
                val = static_cast<float>(v);
            } else if (type == 12) {
                int16_t v; std::memcpy(&v, comp_ptr, 2);
                val = static_cast<float>(v) / 32767.0f;
            } else if (type == 10) {
                val = static_cast<float>(comp_ptr[0]);
            } else if (type == 15) {
                val = static_cast<float>(comp_ptr[0]) / 255.0f;
            } else if (type == 13) {
                val = static_cast<float>(static_cast<int8_t>(comp_ptr[0]));
            } else if (type == 14) {
                val = static_cast<float>(static_cast<int8_t>(comp_ptr[0])) / 127.0f;
            } else if (type == 2) {
                int32_t v; std::memcpy(&v, comp_ptr, 4);
                val = static_cast<float>(v);
            } else if (type == 17) {
                uint32_t v; std::memcpy(&v, comp_ptr, 4);
                val = static_cast<float>(v);
            }
            result[i * num_components + c] = val;
        }
    }
    return result;
}

static void parse_indices(const DataElement& de, int num_faces, PODMesh& mesh) {
    if (!de.payload || de.payload_size == 0) return;
    int index_count = num_faces * 3;
    mesh.indices.reserve(index_count);

    if (de.type == 3 || de.stride == 2) {
        for (int i = 0; i < index_count; i++) {
            if (i * 2 + 2 > (int)de.payload_size) break;
            uint16_t val;
            std::memcpy(&val, de.payload + i * 2, 2);
            mesh.indices.push_back(val);
        }
    } else {
        for (int i = 0; i < index_count; i++) {
            if (i * 4 + 4 > (int)de.payload_size) break;
            uint32_t val;
            std::memcpy(&val, de.payload + i * 4, 4);
            mesh.indices.push_back(static_cast<uint16_t>(val & 0xFFFF));
        }
    }
}

static void compute_mesh_aabb(PODMesh& mesh) {
    if (mesh.positions.empty()) return;
    mesh.min_x = mesh.min_y = mesh.min_z = 1e9f;
    mesh.max_x = mesh.max_y = mesh.max_z = -1e9f;
    for (size_t i = 0; i < mesh.positions.size() / 3; ++i) {
        float x = mesh.positions[i * 3 + 0];
        float y = mesh.positions[i * 3 + 1];
        float z = mesh.positions[i * 3 + 2];
        mesh.min_x = std::min(mesh.min_x, x);
        mesh.min_y = std::min(mesh.min_y, y);
        mesh.min_z = std::min(mesh.min_z, z);
        mesh.max_x = std::max(mesh.max_x, x);
        mesh.max_y = std::max(mesh.max_y, y);
        mesh.max_z = std::max(mesh.max_z, z);
    }
}

static PODMesh readMeshBlock(const uint8_t* data, size_t size, size_t& off) {
    PODMesh mesh;
    uint32_t end_tag = eSceneMesh | kEndTagMask;

    const uint8_t* interleaved_payload = nullptr;
    size_t interleaved_size = 0;

    DataElement idx_element;
    DataElement pos_element;
    DataElement nrm_element;
    DataElement uv_element;
    DataElement bone_idx_element;
    DataElement bone_wgt_element;

    std::vector<uint32_t> bone_batch_indices;
    std::vector<uint32_t> bone_batch_counts;
    std::vector<uint32_t> bone_batch_offsets;
    uint32_t max_bones_per_batch = 0;
    uint32_t num_bone_batches = 0;

    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) break;

        switch (tag) {
            case eMeshNumVertices:
                mesh.num_vertices = static_cast<int>(read_u32(data, size, off));
                break;
            case eMeshNumFaces:
                mesh.num_faces = static_cast<int>(read_u32(data, size, off));
                break;
            case eMeshInteravedDataList:
                interleaved_payload = data + off;
                interleaved_size = len;
                off += len;
                break;
            case eMeshVertexIndexList:
                parse_vertex_block(data, size, off, tag, idx_element);
                break;
            case eMeshVertexList:
                parse_vertex_block(data, size, off, tag, pos_element);
                break;
            case eMeshNormalList:
                parse_vertex_block(data, size, off, tag, nrm_element);
                break;
            case eMeshUVWList: {
                DataElement current_uv;
                parse_vertex_block(data, size, off, tag, current_uv);
                if (uv_element.payload == nullptr) {
                     uv_element = current_uv;
                }
                break;
            }
            case eMeshBoneIndexList:
                parse_vertex_block(data, size, off, tag, bone_idx_element);
                break;
            case eMeshBoneWeightList:
                parse_vertex_block(data, size, off, tag, bone_wgt_element);
                break;
            case eMeshBoneBatchIndexList:
                bone_batch_indices = read_u32_array(data, len, off);
                break;
            case eMeshNumBoneIndicesPerBatch:
                bone_batch_counts = read_u32_array(data, len, off);
                break;
            case eMeshBoneOffsetPerBatch:
                bone_batch_offsets = read_u32_array(data, len, off);
                break;
            case eMeshMaxNumBonesPerBatch:
                max_bones_per_batch = read_u32(data, size, off);
                break;
            case eMeshNumBoneBatches:
                num_bone_batches = read_u32(data, size, off);
                break;
            default:
                off += len;
                break;
        }
    }

    parse_indices(idx_element, mesh.num_faces, mesh);

    mesh.positions = unpack_vertex_data(interleaved_payload, interleaved_size, pos_element, mesh.num_vertices, 3);
    mesh.normals   = unpack_vertex_data(interleaved_payload, interleaved_size, nrm_element, mesh.num_vertices, 3);
    mesh.uvs       = unpack_vertex_data(interleaved_payload, interleaved_size, uv_element,  mesh.num_vertices, 2);

    mesh.bones_per_vertex = bone_idx_element.num_components;
    if (mesh.bones_per_vertex > 0) {
        mesh.bone_indices = unpack_vertex_data(interleaved_payload, interleaved_size, bone_idx_element, mesh.num_vertices, mesh.bones_per_vertex);
        mesh.bone_weights = unpack_vertex_data(interleaved_payload, interleaved_size, bone_wgt_element, mesh.num_vertices, mesh.bones_per_vertex);
    }

    if (num_bone_batches > 0) {
        mesh.has_bone_batches = true;
        mesh.bone_batches.indices = std::move(bone_batch_indices);
        mesh.bone_batches.counts = std::move(bone_batch_counts);
        mesh.bone_batches.offsets = std::move(bone_batch_offsets);
        mesh.bone_batches.max_bones = max_bones_per_batch;
        mesh.bone_batches.count = num_bone_batches;
    }

    compute_mesh_aabb(mesh);
    return mesh;
}

static PODNode readNodeBlock(const uint8_t* data, size_t size, size_t& off) {
    PODNode node;
    uint32_t end_tag = eSceneNode | kEndTagMask;

    bool is_old_format = false;
    float pos[3] = {0,0,0};
    float rot[4] = {0,0,0,1};
    float scl[3] = {1,1,1};
    float mat[16] = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};

    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) break;

        switch (tag) {
            case eNodeIndex:
                node.object_index = static_cast<int>(read_u32(data, size, off));
                break;
            case eNodeName:
                if (len > 0) {
                    node.name.assign(reinterpret_cast<const char*>(data + off), strnlen(reinterpret_cast<const char*>(data + off), len));
                }
                off += len;
                break;
            case eNodeMaterialIndex:
                node.material_index = static_cast<int>(read_u32(data, size, off));
                break;
            case eNodeParentIndex:
                node.parent_index = static_cast<int>(read_u32(data, size, off));
                break;
            case eNodePosition:
                if (len >= 12) {
                    pos[0] = read_float(data, size, off);
                    pos[1] = read_float(data, size, off);
                    pos[2] = read_float(data, size, off);
                    is_old_format = true;
                    off += (len - 12);
                } else off += len;
                break;
            case eNodeRotation:
                if (len >= 16) {
                    rot[0] = read_float(data, size, off);
                    rot[1] = read_float(data, size, off);
                    rot[2] = read_float(data, size, off);
                    rot[3] = read_float(data, size, off);
                    is_old_format = true;
                    off += (len - 16);
                } else off += len;
                break;
            case eNodeScale:
                if (len >= 12) {
                    scl[0] = read_float(data, size, off);
                    scl[1] = read_float(data, size, off);
                    scl[2] = read_float(data, size, off);
                    is_old_format = true;
                    off += (len - 12);
                } else off += len;
                break;
            case eNodeMatrix:
                if (len >= 64) {
                    for (int i = 0; i < 16; i++) mat[i] = read_float(data, size, off);
                    is_old_format = true;
                    off += (len - 64);
                } else off += len;
                break;
            case eNodeAnimationPosition:
                node.anim_translation = read_float_array(data, len, off);
                break;
            case eNodeAnimationRotation:
                node.anim_rotation = read_float_array(data, len, off);
                break;
            case eNodeAnimationScale:
                node.anim_scale = read_float_array(data, len, off);
                break;
            case eNodeAnimationMatrix:
                node.anim_matrix = read_float_array(data, len, off);
                break;
            case eNodeAnimationFlags:
                node.anim_flags = read_u32(data, size, off);
                break;
            case eNodeAnimationPositionIndex:
                node.anim_translation_idx = read_u32_array(data, len, off);
                break;
            case eNodeAnimationRotationIndex:
                node.anim_rotation_idx = read_u32_array(data, len, off);
                break;
            case eNodeAnimationScaleIndex:
                node.anim_scale_idx = read_u32_array(data, len, off);
                break;
            case eNodeAnimationMatrixIndex:
                node.anim_matrix_idx = read_u32_array(data, len, off);
                break;
            default:
                off += len;
                break;
        }
    }

    if (is_old_format) {
        node.has_translation = true;
        std::memcpy(node.translation, pos, 12);
        node.has_rotation = true;
        std::memcpy(node.rotation, rot, 16);
        node.has_scale = true;
        std::memcpy(node.scale, scl, 12);
        node.has_matrix = true;
        std::memcpy(node.matrix, mat, 64);
    }

    return node;
}

static std::string readTextureBlock(const uint8_t* data, size_t size, size_t& off) {
    std::string name;
    uint32_t end_tag = eSceneTexture | kEndTagMask;
    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) break;

        if (tag == eTextureFilename) {
            if (len > 0) {
                name.assign(reinterpret_cast<const char*>(data + off), strnlen(reinterpret_cast<const char*>(data + off), len));
            }
            off += len;
        } else {
            off += len;
        }
    }
    return name;
}

static PODMaterial readMaterialBlock(const uint8_t* data, size_t size, size_t& off) {
    PODMaterial mat;
    uint32_t end_tag = eSceneMaterial | kEndTagMask;
    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) break;

        switch (tag) {
            case eMaterialName:
                if (len > 0) {
                    mat.name.assign(reinterpret_cast<const char*>(data + off), strnlen(reinterpret_cast<const char*>(data + off), len));
                }
                off += len;
                break;
            case eMaterialDiffuseTextureIndex:
                mat.diffuse_texture_index = static_cast<int>(read_u32(data, size, off));
                break;
            default:
                off += len;
                break;
        }
    }
    return mat;
}

static void readSceneBlock(const uint8_t* data, size_t size, size_t& off, PODModel& model) {
    uint32_t end_tag = eScene | kEndTagMask;
    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == end_tag) break;

        switch (tag) {
            case eSceneNumMeshes:
                if (len >= 4) {
                    uint32_t count = read_u32(data, size, off);
                    model.meshes.reserve(count);
                } else off += len;
                break;
            case eSceneNumNodes:
                if (len >= 4) {
                    uint32_t count = read_u32(data, size, off);
                    model.nodes.reserve(count);
                } else off += len;
                break;
            case eSceneNumMeshNodes:
                if (len >= 4) {
                    model.num_mesh_nodes = static_cast<int>(read_u32(data, size, off));
                } else off += len;
                break;
            case eSceneNumTextures:
                if (len >= 4) {
                    model.texture_filenames.reserve(read_u32(data, size, off));
                } else off += len;
                break;
            case eSceneNumMaterials:
                if (len >= 4) {
                    model.materials.reserve(read_u32(data, size, off));
                } else off += len;
                break;
            case eSceneNumFrames:
                if (len >= 4) {
                    model.num_frames = static_cast<int>(read_u32(data, size, off));
                } else off += len;
                break;
            case eSceneMesh:
                model.meshes.push_back(readMeshBlock(data, size, off));
                break;
            case eSceneNode:
                model.nodes.push_back(readNodeBlock(data, size, off));
                break;
            case eSceneTexture:
                model.texture_filenames.push_back(readTextureBlock(data, size, off));
                break;
            case eSceneMaterial:
                model.materials.push_back(readMaterialBlock(data, size, off));
                break;
            default:
                off += len;
                break;
        }
    }
}

PODModel pod_parse(const uint8_t* data, size_t size) {
    PODModel model;
    size_t off = 0;

    while (off < size) {
        uint32_t tag = read_u32(data, size, off);
        uint32_t len = read_u32(data, size, off);
        if (off + len > size) len = size - off;

        if (tag == eFormatVersion) {
            if (len > 0) {
                model.version.assign(reinterpret_cast<const char*>(data + off), strnlen(reinterpret_cast<const char*>(data + off), len));
            }
            off += len;
        } else if (tag == eScene) {
            readSceneBlock(data, size, off, model);
        } else {
            off += len;
        }
    }

    for (const auto& m : model.meshes) {
        model.total_vertices += m.num_vertices;
        model.total_faces    += m.num_faces;

        if (!m.positions.empty()) {
            model.min_x = std::min(model.min_x, m.min_x);
            model.min_y = std::min(model.min_y, m.min_y);
            model.min_z = std::min(model.min_z, m.min_z);
            model.max_x = std::max(model.max_x, m.max_x);
            model.max_y = std::max(model.max_y, m.max_y);
            model.max_z = std::max(model.max_z, m.max_z);
        }
    }

    if (model.total_vertices > 0) {
        model.center_x = (model.min_x + model.max_x) * 0.5f;
        model.center_y = (model.min_y + model.max_y) * 0.5f;
        model.center_z = (model.min_z + model.max_z) * 0.5f;

        float dx = model.max_x - model.min_x;
        float dy = model.max_y - model.min_y;
        float dz = model.max_z - model.min_z;
        model.radius = std::sqrt(dx * dx + dy * dy + dz * dz) * 0.5f;
        if (model.radius < 1e-5f) model.radius = 1.0f;
    }

    return model;
}

static void local_mat4_identity(float m[16]) {
    std::memset(m, 0, 16 * sizeof(float));
    m[0] = m[5] = m[10] = m[15] = 1.0f;
}

static void local_mat4_mul(const float a[16], const float b[16], float out[16]) {
    float tmp[16];
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 4; r++) {
            tmp[c * 4 + r] =
                a[0 * 4 + r] * b[c * 4 + 0] +
                a[1 * 4 + r] * b[c * 4 + 1] +
                a[2 * 4 + r] * b[c * 4 + 2] +
                a[3 * 4 + r] * b[c * 4 + 3];
        }
    }
    std::memcpy(out, tmp, 16 * sizeof(float));
}

static void local_mat4_from_quat(const float q[4], float m[16]) {
    float x = q[0], y = q[1], z = q[2], w = q[3];
    m[0] = 1.0f - 2.0f * (y * y + z * z);
    m[1] = 2.0f * (x * y + z * w);
    m[2] = 2.0f * (x * z - y * w);
    m[3] = 0.0f;

    m[4] = 2.0f * (x * y - z * w);
    m[5] = 1.0f - 2.0f * (x * x + z * z);
    m[6] = 2.0f * (y * z + x * w);
    m[7] = 0.0f;

    m[8] = 2.0f * (x * z + y * w);
    m[9] = 2.0f * (y * z - x * w);
    m[10] = 1.0f - 2.0f * (x * x + y * y);
    m[11] = 0.0f;

    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;
}

static void get_node_matrix_internal(const PODModel& model, int node_idx, int frame, float* mOut, int depth) {
    if (depth > 64 || node_idx < 0 || node_idx >= (int)model.nodes.size()) {
        std::memset(mOut, 0, 16 * sizeof(float));
        mOut[0] = mOut[5] = mOut[10] = mOut[15] = 1.0f;
        return;
    }

    const auto& node = model.nodes[node_idx];

    float local[16];
    local_mat4_identity(local);

    if (!node.anim_matrix.empty()) {
        int f_clamped = std::clamp(frame, 0, (int)node.anim_matrix.size() / 16 - 1);
        std::memcpy(local, &node.anim_matrix[f_clamped * 16], sizeof(local));
    } else if (node.has_matrix) {
        std::memcpy(local, node.matrix, sizeof(local));
    } else {
        float S[16], R[16], T[16];
        local_mat4_identity(S);
        local_mat4_identity(R);
        local_mat4_identity(T);

        float t_val[3] = {node.translation[0], node.translation[1], node.translation[2]};
        if (!node.anim_translation.empty()) {
            int f_clamped = std::clamp(frame, 0, (int)node.anim_translation.size() / 3 - 1);
            t_val[0] = node.anim_translation[f_clamped * 3 + 0];
            t_val[1] = node.anim_translation[f_clamped * 3 + 1];
            t_val[2] = node.anim_translation[f_clamped * 3 + 2];
        }
        T[12] = t_val[0];
        T[13] = t_val[1];
        T[14] = t_val[2];

        float r_val[4] = {node.rotation[0], node.rotation[1], node.rotation[2], node.rotation[3]};
        if (!node.anim_rotation.empty()) {
            int f_clamped = std::clamp(frame, 0, (int)node.anim_rotation.size() / 4 - 1);
            r_val[0] = node.anim_rotation[f_clamped * 4 + 0];
            r_val[1] = node.anim_rotation[f_clamped * 4 + 1];
            r_val[2] = node.anim_rotation[f_clamped * 4 + 2];
            r_val[3] = node.anim_rotation[f_clamped * 4 + 3];
        }
        local_mat4_from_quat(r_val, R);

        float s_val[3] = {node.scale[0], node.scale[1], node.scale[2]};
        if (!node.anim_scale.empty()) {
            int stride = (node.anim_scale.size() / std::max(1, model.num_frames) >= 7) ? 7 : 3;
            int f_clamped = std::clamp(frame, 0, (int)node.anim_scale.size() / stride - 1);
            s_val[0] = node.anim_scale[f_clamped * stride + 0];
            s_val[1] = node.anim_scale[f_clamped * stride + 1];
            s_val[2] = node.anim_scale[f_clamped * stride + 2];
        }
        S[0] = s_val[0];
        S[5] = s_val[1];
        S[10] = s_val[2];

        float temp[16];
        local_mat4_mul(T, R, temp);
        local_mat4_mul(temp, S, local);
    }

    if (node.parent_index != -1 && node.parent_index != node_idx) {
        float parent_world[16];
        get_node_matrix_internal(model, node.parent_index, frame, parent_world, depth + 1);
        local_mat4_mul(parent_world, local, mOut);
    } else {
        std::memcpy(mOut, local, sizeof(local));
    }
}

void get_node_matrix(const PODModel& model, int node_idx, int frame, float* mOut) {
    get_node_matrix_internal(model, node_idx, frame, mOut, 0);
}

PODModel pod_load(const std::string& path) {
    auto data = caver::VFS::instance().readFile(path);
    if (!data) {
        data = caver::VFS::instance().readFile(path + ".POD");
    }
    if (!data) {
        data = caver::VFS::instance().readFile(path + ".pod");
    }

    if (!data || data->empty()) return {};

    return pod_parse(data->data(), data->size());
}

} // namespace av

namespace caver {

Mesh::~Mesh() {
    if (ebo_) glDeleteBuffers(1, &ebo_);
    if (vbo_) glDeleteBuffers(1, &vbo_);
    if (vao_) glDeleteVertexArrays(1, &vao_);
}

void Mesh::uploadGLBuffers(const std::vector<Vertex>& vertices, const std::vector<uint16_t>& indices) {
    indexCount_ = indices.size();
    if (vertices.empty() || indices.empty()) return;

    glGenVertexArrays(1, &vao_);
    glGenBuffers(1, &vbo_);
    glGenBuffers(1, &ebo_);

    glBindVertexArray(vao_);

    glBindBuffer(GL_ARRAY_BUFFER, vbo_);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo_);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(uint16_t), indices.data(), GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, position));

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, normal));

    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, uv));

    glBindVertexArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void Mesh::draw(bool useVAO) const {
    if (indexCount_ == 0) return;

    if (!textureName_.empty()) {
        uint32_t tex = RenderingContext::instance().getTexture(textureName_);
        if (tex != 0) {
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, tex);
            RenderingContext::instance().getShader().setUseTexture(true);
        }
    }

    if (useVAO && vao_ != 0) {
        glBindVertexArray(vao_);
        glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(indexCount_), GL_UNSIGNED_SHORT, 0);
        glBindVertexArray(0);
    } else {
        glBindBuffer(GL_ARRAY_BUFFER, vbo_);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo_);

        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, position));

        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, normal));

        glEnableVertexAttribArray(2);
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, uv));

        glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(indexCount_), GL_UNSIGNED_SHORT, 0);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    RenderingContext::instance().recordDrawCall();
    RenderingContext::instance().recordTriangles(getTriangleCount());
}

std::shared_ptr<Model> PODLoader::loadModel(const std::string& filename) {
    auto model = std::make_shared<Model>();
    model->setName(filename);

    av::PODModel pod = av::pod_load(filename);
    if (pod.meshes.empty()) {
        std::cerr << "[PODLoader] Warning: Could not read POD model file '" << filename << "'" << std::endl;
        return model;
    }

    if (!pod.nodes.empty()) {
        for (int node_idx = 0; node_idx < static_cast<int>(pod.nodes.size()); ++node_idx) {
            const auto& node = pod.nodes[node_idx];
            if (node.object_index < 0 || node.object_index >= static_cast<int>(pod.meshes.size())) continue;

            const auto& pod_mesh = pod.meshes[node.object_index];
            if (pod_mesh.positions.empty() || pod_mesh.indices.empty()) continue;

            float nodeMat[16];
            av::get_node_matrix(pod, node_idx, 0, nodeMat);

            Matrix4 nodeTransform;
            std::memcpy(nodeTransform.m, nodeMat, sizeof(nodeMat));

            size_t vcount = pod_mesh.positions.size() / 3;
            std::vector<Vertex> parsedVertices(vcount);

            for (size_t i = 0; i < vcount; ++i) {
                Vertex v;
                Vector3 localPos(pod_mesh.positions[i * 3 + 0], pod_mesh.positions[i * 3 + 1], pod_mesh.positions[i * 3 + 2]);
                v.position = nodeTransform.transformPoint(localPos);

                if (i * 3 + 2 < pod_mesh.normals.size()) {
                    Vector3 localNorm(pod_mesh.normals[i * 3 + 0], pod_mesh.normals[i * 3 + 1], pod_mesh.normals[i * 3 + 2]);
                    v.normal = nodeTransform.transformDirection(localNorm).normalized();
                } else {
                    v.normal = Vector3(0, 0, 1);
                }

                if (i * 2 + 1 < pod_mesh.uvs.size()) {
                    v.uv = Vector2(pod_mesh.uvs[i * 2 + 0], pod_mesh.uvs[i * 2 + 1]);
                } else {
                    v.uv = Vector2(0, 0);
                }
                parsedVertices[i] = v;
            }

            auto mesh = std::make_shared<Mesh>();
            mesh->uploadGLBuffers(parsedVertices, pod_mesh.indices);

            int matIdx = node.material_index;
            if (matIdx >= 0 && matIdx < static_cast<int>(pod.materials.size())) {
                int texIdx = pod.materials[matIdx].diffuse_texture_index;
                if (texIdx >= 0 && texIdx < static_cast<int>(pod.texture_filenames.size())) {
                    mesh->setTextureName(pod.texture_filenames[texIdx]);
                }
            } else if (!pod.materials.empty() && pod.materials[0].diffuse_texture_index >= 0 &&
                       pod.materials[0].diffuse_texture_index < static_cast<int>(pod.texture_filenames.size())) {
                mesh->setTextureName(pod.texture_filenames[pod.materials[0].diffuse_texture_index]);
            }

            model->addMesh(mesh);
        }
    } else {
        for (const auto& pod_mesh : pod.meshes) {
            if (pod_mesh.positions.empty() || pod_mesh.indices.empty()) continue;

            size_t vcount = pod_mesh.positions.size() / 3;
            std::vector<Vertex> parsedVertices(vcount);

            for (size_t i = 0; i < vcount; ++i) {
                Vertex v;
                v.position = Vector3(pod_mesh.positions[i * 3 + 0], pod_mesh.positions[i * 3 + 1], pod_mesh.positions[i * 3 + 2]);

                if (i * 3 + 2 < pod_mesh.normals.size()) {
                    v.normal = Vector3(pod_mesh.normals[i * 3 + 0], pod_mesh.normals[i * 3 + 1], pod_mesh.normals[i * 3 + 2]);
                } else {
                    v.normal = Vector3(0, 0, 1);
                }

                if (i * 2 + 1 < pod_mesh.uvs.size()) {
                    v.uv = Vector2(pod_mesh.uvs[i * 2 + 0], pod_mesh.uvs[i * 2 + 1]);
                } else {
                    v.uv = Vector2(0, 0);
                }
                parsedVertices[i] = v;
            }

            auto mesh = std::make_shared<Mesh>();
            mesh->uploadGLBuffers(parsedVertices, pod_mesh.indices);

            if (!pod.materials.empty() && pod.materials[0].diffuse_texture_index >= 0 &&
                pod.materials[0].diffuse_texture_index < static_cast<int>(pod.texture_filenames.size())) {
                mesh->setTextureName(pod.texture_filenames[pod.materials[0].diffuse_texture_index]);
            }

            model->addMesh(mesh);
        }
    }

    return model;
}

} // namespace caver
