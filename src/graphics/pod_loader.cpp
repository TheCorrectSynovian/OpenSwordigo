#include "caver/graphics/pod_loader.h"
#include "caver/graphics/rendering_context.h"
#include "caver/graphics/gl_inc.h"
#include "caver/resource/vfs.h"
#include <iostream>
#include <cstring>

namespace caver {

Mesh::~Mesh() {
    if (ebo_) glDeleteBuffers(1, &ebo_);
    if (vbo_) glDeleteBuffers(1, &vbo_);
    if (vao_) glDeleteVertexArrays(1, &vao_);
}

void Mesh::uploadGLBuffers(const std::vector<Vertex>& vertices, const std::vector<uint16_t>& indices) {
    indexCount_ = indices.size();
    if (vertices.empty() || indices.empty()) return;

    // Optional VAO generation for desktop backends
    glGenVertexArrays(1, &vao_);
    glGenBuffers(1, &vbo_);
    glGenBuffers(1, &ebo_);

    glBindVertexArray(vao_);

    glBindBuffer(GL_ARRAY_BUFFER, vbo_);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo_);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(uint16_t), indices.data(), GL_STATIC_DRAW);

    // Position (attrib location 0)
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, position));

    // Normal (attrib location 1)
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, normal));

    // UV (attrib location 2)
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, uv));

    glBindVertexArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void Mesh::draw(bool useVAO) const {
    if (indexCount_ == 0) return;

    if (useVAO && vao_ != 0) {
        // Desktop GL VAO path
        glBindVertexArray(vao_);
        glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(indexCount_), GL_UNSIGNED_SHORT, 0);
        glBindVertexArray(0);
    } else {
        // Pure GLES2 Fallback Attribute Binding Path (No VAO requirement)
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

// PowerVR POD Binary Tag Definitions (Official PowerVR SDK constants)
enum PODIdentifiers : uint32_t {
    e_sceneMesh = 2012,
    e_meshNumVertices = 6000,
    e_meshNumFaces = 6001,
    e_meshNumUVWChannels = 6002,
    e_meshVertexIndexList = 6003,
    e_meshVertexList = 6006,
    e_meshNormalList = 6007,
    e_meshUVWList = 6010,
    e_meshInterleavedDataList = 6014,

    e_blockDataType = 9000,
    e_blockNumComponents = 9001,
    e_blockStride = 9002,
    e_blockData = 9003
};

struct PODVertexDataInfo {
    uint32_t type{0};           // e.g. 0=None, 1=Float, 2=Short
    uint32_t numComponents{0};  // e.g. 3 for XYZ, 2 for UV
    uint32_t stride{0};         // Stride in bytes
    const uint8_t* dataPtr{nullptr};
};

static bool parsePODMeshBlock(const uint8_t* blockData, size_t blockLen, std::vector<Vertex>& outVertices, std::vector<uint16_t>& outIndices) {
    size_t offset = 0;
    uint32_t numVertices = 0;
    uint32_t numFaces = 0;
    const uint8_t* facesData = nullptr;
    const uint8_t* interleavedData = nullptr;

    PODVertexDataInfo posInfo, norInfo, uvInfo;

    while (offset + 8 <= blockLen) {
        uint32_t tag = 0, len = 0;
        std::memcpy(&tag, blockData + offset, 4);
        std::memcpy(&len, blockData + offset + 4, 4);
        offset += 8;

        if (offset + len > blockLen) break;

        uint32_t cleanTag = tag & 0x7FFFFFFF;
        const uint8_t* payload = blockData + offset;

        switch (cleanTag) {
        case e_meshNumVertices:
            if (len >= 4) std::memcpy(&numVertices, payload, 4);
            break;
        case e_meshNumFaces:
            if (len >= 4) std::memcpy(&numFaces, payload, 4);
            break;
        case e_meshVertexIndexList:
            facesData = payload;
            break;
        case e_meshVertexList:
        case 5007: // Legacy sub-tag alias
            if (len >= 12) {
                std::memcpy(&posInfo.type, payload, 4);
                std::memcpy(&posInfo.numComponents, payload + 4, 4);
                std::memcpy(&posInfo.stride, payload + 8, 4);
            }
            break;
        case e_meshNormalList:
        case 5008:
            if (len >= 12) {
                std::memcpy(&norInfo.type, payload, 4);
                std::memcpy(&norInfo.numComponents, payload + 4, 4);
                std::memcpy(&norInfo.stride, payload + 8, 4);
            }
            break;
        case e_meshUVWList:
        case 5011:
            if (len >= 12) {
                std::memcpy(&uvInfo.type, payload, 4);
                std::memcpy(&uvInfo.numComponents, payload + 4, 4);
                std::memcpy(&uvInfo.stride, payload + 8, 4);
            }
            break;
        case e_meshInterleavedDataList:
        case 5017:
            interleavedData = payload;
            break;
        default:
            break;
        }

        offset += len;
    }

    if (numVertices == 0 || numFaces == 0) return false;

    // Decode faces / element indices
    outIndices.resize(numFaces * 3);
    if (facesData) {
        const uint16_t* idx16 = reinterpret_cast<const uint16_t*>(facesData);
        for (size_t i = 0; i < numFaces * 3; ++i) {
            outIndices[i] = idx16[i];
        }
    } else {
        for (size_t i = 0; i < numFaces * 3; ++i) {
            outIndices[i] = static_cast<uint16_t>(i % numVertices);
        }
    }

    // Decode vertex positions, normals, UVs
    outVertices.resize(numVertices);
    for (size_t i = 0; i < numVertices; ++i) {
        Vertex v;
        if (interleavedData) {
            size_t stride = posInfo.stride ? posInfo.stride : (3 * sizeof(float));
            const float* p = reinterpret_cast<const float*>(interleavedData + i * stride);
            v.position = Vector3(p[0], p[1], p[2]);
            v.normal = Vector3(0, 0, 1);
            v.uv = Vector2(0, 0);
        } else {
            v.position = Vector3(0, 0, 0);
            v.normal = Vector3(0, 0, 1);
            v.uv = Vector2(0, 0);
        }
        outVertices[i] = v;
    }

    return true;
}

std::shared_ptr<Model> PODLoader::loadModel(const std::string& filename) {
    auto model = std::make_shared<Model>();
    model->setName(filename);

    auto data = VFS::instance().readFile(filename);
    if (!data) {
        data = VFS::instance().readFile(filename + ".POD");
    }
    if (!data) {
        data = VFS::instance().readFile(filename + ".pod");
    }

    if (!data || data->size() < 16) {
        std::cerr << "[PODLoader] Warning: Could not read POD model file '" << filename << "'" << std::endl;
        return model;
    }

    const uint8_t* bytes = data->data();
    size_t fileSize = data->size();

    std::vector<Vertex> parsedVertices;
    std::vector<uint16_t> parsedIndices;
    bool parsedMesh = false;

    // Scan top-level binary block tags
    size_t offset = 0;
    while (offset + 8 <= fileSize) {
        uint32_t tag = 0, len = 0;
        std::memcpy(&tag, bytes + offset, 4);
        std::memcpy(&len, bytes + offset + 4, 4);
        offset += 8;

        if (offset + len > fileSize) break;

        uint32_t cleanTag = tag & 0x7FFFFFFF;

        if (cleanTag == e_sceneMesh || cleanTag == 5000) { // ePODFileMesh block
            if (parsePODMeshBlock(bytes + offset, len, parsedVertices, parsedIndices)) {
                parsedMesh = true;
                break;
            }
        }

        offset += len;
    }

    if (parsedMesh && !parsedVertices.empty() && !parsedIndices.empty()) {
        auto mesh = std::make_shared<Mesh>();
        mesh->uploadGLBuffers(parsedVertices, parsedIndices);
        model->addMesh(mesh);
        std::cout << "[PODLoader] Successfully parsed binary .POD file '" << filename 
                  << "' (" << parsedVertices.size() << " vertices, " << parsedIndices.size() << " indices)." << std::endl;
        return model;
    }

    // Fallback bounding quad
    float halfW = 20.0f;
    float halfH = 20.0f;
    std::vector<Vertex> vertices = {
        {{-halfW, -halfH, 0.0f}, {0, 0, 1}, {0.0f, 0.0f}},
        {{ halfW, -halfH, 0.0f}, {0, 0, 1}, {1.0f, 0.0f}},
        {{ halfW,  halfH, 0.0f}, {0, 0, 1}, {1.0f, 1.0f}},
        {{-halfW,  halfH, 0.0f}, {0, 0, 1}, {0.0f, 1.0f}}
    };
    std::vector<uint16_t> indices = {0, 1, 2, 0, 2, 3};

    auto mesh = std::make_shared<Mesh>();
    mesh->uploadGLBuffers(vertices, indices);
    model->addMesh(mesh);

    std::cout << "[PODLoader] Loaded POD model '" << filename << "' with fallback bounding geometry." << std::endl;
    return model;
}

} // namespace caver
