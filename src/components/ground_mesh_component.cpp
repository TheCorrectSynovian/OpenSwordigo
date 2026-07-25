#include "caver/components/ground_mesh_component.h"
#include "caver/components/texture_mapping_component.h"
#include "caver/scene/scene_object.h"
#include "caver/graphics/gl_inc.h"
#include <iostream>

namespace caver {

static float crossProduct2D(const Vector2& a, const Vector2& b, const Vector2& c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

static bool isPointInTriangle(const Vector2& p, const Vector2& a, const Vector2& b, const Vector2& c) {
    float cp1 = crossProduct2D(a, b, p);
    float cp2 = crossProduct2D(b, c, p);
    float cp3 = crossProduct2D(c, a, p);
    return (cp1 >= 0 && cp2 >= 0 && cp3 >= 0) || (cp1 <= 0 && cp2 <= 0 && cp3 <= 0);
}

static void triangulateEarClipping(const std::vector<Vector2>& poly, std::vector<uint16_t>& outIndices) {
    size_t n = poly.size();
    if (n < 3) return;

    std::vector<uint16_t> V(n);
    for (size_t i = 0; i < n; ++i) V[i] = static_cast<uint16_t>(i);

    // Ensure counter-clockwise winding
    float area = 0.0f;
    for (size_t i = 0; i < n; ++i) {
        size_t j = (i + 1) % n;
        area += (poly[i].x * poly[j].y - poly[j].x * poly[i].y);
    }
    if (area < 0.0f) {
        for (size_t i = 0; i < n; ++i) V[i] = static_cast<uint16_t>(n - 1 - i);
    }

    int count = 2 * static_cast<int>(n);
    for (size_t v = n - 1; n > 2;) {
        if (count-- <= 0) {
            // Fallback fan if ear clipping stalls
            for (size_t i = 1; i + 1 < n; ++i) {
                outIndices.push_back(V[0]);
                outIndices.push_back(V[i]);
                outIndices.push_back(V[i + 1]);
            }
            return;
        }

        size_t u = v;
        if (n <= u) u = 0;
        v = u + 1;
        if (n <= v) v = 0;
        size_t w = v + 1;
        if (n <= w) w = 0;

        Vector2 A = poly[V[u]];
        Vector2 B = poly[V[v]];
        Vector2 C = poly[V[w]];

        if (crossProduct2D(A, B, C) <= 0.00001f) continue;

        bool hasPointInside = false;
        for (size_t p = 0; p < n; ++p) {
            if (p == u || p == v || p == w) continue;
            if (isPointInTriangle(poly[V[p]], A, B, C)) {
                hasPointInside = true;
                break;
            }
        }

        if (!hasPointInside) {
            outIndices.push_back(V[u]);
            outIndices.push_back(V[v]);
            outIndices.push_back(V[w]);

            V.erase(V.begin() + v);
            n--;
            count = 2 * static_cast<int>(n);
        }
    }
}

struct MeshDataMeta {
    uint32_t dataType{0};
    uint32_t components{0};
    uint32_t offset{0};
    uint32_t stride{0};
};

static MeshDataMeta parseMeshDataMeta(const std::vector<uint8_t>& bytes) {
    MeshDataMeta meta;
    ProtoMessage msg;
    msg.parseFromBytes(bytes.data(), bytes.size());
    for (const auto& f : msg.fields) {
        if (f.fieldNumber == 1) meta.dataType = static_cast<uint32_t>(f.varintVal);
        if (f.fieldNumber == 2) meta.components = static_cast<uint32_t>(f.varintVal);
        if (f.fieldNumber == 3) meta.offset = static_cast<uint32_t>(f.varintVal);
        if (f.fieldNumber == 4) meta.stride = static_cast<uint32_t>(f.varintVal);
    }
    return meta;
}

static std::string parseMaterialTextureName(const std::vector<uint8_t>& bytes) {
    ProtoMessage msg;
    msg.parseFromBytes(bytes.data(), bytes.size());
    for (const auto& f : msg.fields) {
        if (f.fieldNumber == 5 && !f.bytesVal.empty()) {
            ProtoMessage matMsg;
            matMsg.parseFromBytes(f.bytesVal.data(), f.bytesVal.size());
            for (const auto& mf : matMsg.fields) {
                if (mf.fieldNumber == 1 && !mf.bytesVal.empty()) {
                    return std::string(mf.bytesVal.begin(), mf.bytesVal.end());
                }
            }
        }
    }
    return "";
}

void GroundMeshComponent::loadFromProtobuf(const ProtoMessage& msg) {
    Component::loadFromProtobuf(msg);
    textureName_ = msg.getString(1);

    polygonPoints_.clear();
    surfaceMeshes_.clear();
    frontMeshes_.clear();

    for (const auto& field : msg.fields) {
        if (field.fieldNumber == 110 && !field.bytesVal.empty()) {
            ProtoMessage subMsg;
            subMsg.parseFromBytes(field.bytesVal.data(), field.bytesVal.size());
            for (const auto& sf : subMsg.fields) {
                if (sf.fieldNumber == 2 && !sf.bytesVal.empty()) {
                    ProtoMessage sub2Msg;
                    sub2Msg.parseFromBytes(sf.bytesVal.data(), sf.bytesVal.size());
                    for (const auto& s2 : sub2Msg.fields) {
                        if (s2.fieldNumber == 1 && !s2.bytesVal.empty()) {
                            ProtoMessage sub3Msg;
                            sub3Msg.parseFromBytes(s2.bytesVal.data(), s2.bytesVal.size());
                            float px = 0.0f, py = 0.0f;
                            for (const auto& s3 : sub3Msg.fields) {
                                if (s3.fieldNumber == 1) px = s3.asFloat();
                                if (s3.fieldNumber == 2) py = s3.asFloat();
                            }
                            polygonPoints_.push_back(Vector2(px, py));
                        }
                    }
                }
            }
        } else if (field.fieldNumber == 111 && !field.bytesVal.empty()) {
            parseGroundMeshBlock(field.bytesVal);
        }
    }
}

void GroundMeshComponent::parseGroundMeshBlock(const std::vector<uint8_t>& bytes) {
    ProtoMessage gmMsg;
    gmMsg.parseFromBytes(bytes.data(), bytes.size());
    for (const auto& f : gmMsg.fields) {
        if (f.fieldNumber == 8 && !f.bytesVal.empty()) {
            parseSingleMesh(f.bytesVal, true);  // SurfaceMesh
        } else if (f.fieldNumber == 9 && !f.bytesVal.empty()) {
            parseSingleMesh(f.bytesVal, false); // FrontMesh
        }
    }
}

void GroundMeshComponent::parseSingleMesh(const std::vector<uint8_t>& bytes, bool isSurface) {
    ProtoMessage mMsg;
    mMsg.parseFromBytes(bytes.data(), bytes.size());

    int vertexCountParam = 0;
    std::string texName;
    std::vector<uint8_t> vertexData, indexData;

    for (const auto& f : mMsg.fields) {
        if (f.fieldNumber == 1) {
            vertexCountParam = static_cast<int>(f.varintVal);
        } else if (f.fieldNumber == 16 && !f.bytesVal.empty()) {
            texName = parseMaterialTextureName(f.bytesVal);
        } else if (f.fieldNumber == 50 && !f.bytesVal.empty()) {
            vertexData = f.bytesVal;
        } else if (f.fieldNumber == 51 && !f.bytesVal.empty()) {
            indexData = f.bytesVal;
        }
    }

    if (vertexData.empty()) return;

    size_t floatCount = vertexData.size() / sizeof(float);
    int numVertices = static_cast<int>(floatCount / 8);
    if (vertexCountParam > 0 && vertexCountParam < numVertices) {
        numVertices = vertexCountParam;
    }
    if (numVertices <= 0) return;

    const float* floats = reinterpret_cast<const float*>(vertexData.data());
    std::vector<Vertex> parsedVertices(numVertices);

    for (int i = 0; i < numVertices; ++i) {
        Vertex v;
        v.position = Vector3(floats[i * 8 + 0], floats[i * 8 + 1], floats[i * 8 + 2]);
        v.normal   = Vector3(floats[i * 8 + 3], floats[i * 8 + 4], floats[i * 8 + 5]);
        v.uv       = Vector2(floats[i * 8 + 6], floats[i * 8 + 7]);
        parsedVertices[i] = v;
    }

    std::vector<uint16_t> parsedIndices;
    if (!indexData.empty()) {
        size_t numIndices = indexData.size() / sizeof(uint16_t);
        parsedIndices.resize(numIndices);
        std::memcpy(parsedIndices.data(), indexData.data(), numIndices * sizeof(uint16_t));
    }

    auto subMesh = std::make_shared<Mesh>();
    subMesh->uploadGLBuffers(parsedVertices, parsedIndices);

    GroundSubMesh gsm;
    gsm.mesh = subMesh;
    gsm.textureName = texName.empty() ? textureName_ : texName;

    if (isSurface) {
        surfaceMeshes_.push_back(gsm);
    } else {
        frontMeshes_.push_back(gsm);
    }
}

void GroundMeshComponent::render(RenderingContext& ctx) {
    if (surfaceMeshes_.empty() && frontMeshes_.empty()) {
        return;
    }

    Vector2 pos(0, 0);
    float depth = 0.0f;
    float rot = 0.0f;
    float scale = 1.0f;

    if (owner_) {
        pos = owner_->getPosition();
        depth = owner_->getDepth();
        rot = owner_->getRotation();
        scale = owner_->getScaling();
    }

    Matrix4 translation = Matrix4::translation(Vector3(pos.x, pos.y, depth));
    Matrix4 rotation = Matrix4::rotationY(rot);
    Matrix4 scaling = Matrix4::scale(Vector3(scale, scale, scale));

    Matrix4 modelMat = translation * rotation * scaling;
    Matrix4 mvp = ctx.getViewProjection() * modelMat;

    ctx.getShader().setMVP(mvp);
    ctx.getShader().setColor(FloatColor(1.0f, 1.0f, 1.0f, 1.0f));

    auto renderMeshList = [&](std::vector<GroundSubMesh>& list) {
        for (auto& gsm : list) {
            if (!gsm.mesh || gsm.mesh->getIndexCount() == 0) continue;

            if ((gsm.textureName.empty() || gsm.textureName == "GroundMesh") && owner_) {
                for (const auto& comp : owner_->getComponents()) {
                    auto texMap = std::dynamic_pointer_cast<TextureMappingComponent>(comp);
                    if (texMap) {
                        gsm.textureName = texMap->getTextureName();
                        if (!gsm.textureName.empty()) break;
                    }
                }
            }

            if (gsm.textureId == 0 && !gsm.textureName.empty()) {
                gsm.textureId = ctx.getTexture(gsm.textureName);
            }

            if (gsm.textureId != 0) {
                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, gsm.textureId);
                ctx.getShader().setUseTexture(true);
            } else {
                ctx.getShader().setUseTexture(false);
            }

            gsm.mesh->draw();
        }
    };

    renderMeshList(surfaceMeshes_);
    renderMeshList(frontMeshes_);
}

} // namespace caver
