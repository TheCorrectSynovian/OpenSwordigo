#include "caver/math/caver_math.h"
#include <cmath>

namespace caver {

Matrix4 Matrix4::translation(const Vector3& t) {
    Matrix4 res = identity();
    res.m[12] = t.x;
    res.m[13] = t.y;
    res.m[14] = t.z;
    return res;
}

Matrix4 Matrix4::scale(const Vector3& s) {
    Matrix4 res = identity();
    res.m[0]  = s.x;
    res.m[5]  = s.y;
    res.m[10] = s.z;
    return res;
}

Matrix4 Matrix4::rotationZ(float radians) {
    Matrix4 res = identity();
    float c = std::cos(radians);
    float s = std::sin(radians);
    res.m[0] = c;  res.m[4] = -s;
    res.m[1] = s;  res.m[5] = c;
    return res;
}

Matrix4 Matrix4::operator*(const Matrix4& rhs) const {
    Matrix4 res;
    for (int col = 0; col < 4; ++col) {
        for (int row = 0; row < 4; ++row) {
            float sum = 0.0f;
            for (int k = 0; k < 4; ++k) {
                sum += m[k * 4 + row] * rhs.m[col * 4 + k];
            }
            res.m[col * 4 + row] = sum;
        }
    }
    return res;
}

Vector3 Matrix4::transformPoint(const Vector3& p) const {
    float x = m[0]*p.x + m[4]*p.y + m[8]*p.z  + m[12];
    float y = m[1]*p.x + m[5]*p.y + m[9]*p.z  + m[13];
    float z = m[2]*p.x + m[6]*p.y + m[10]*p.z + m[14];
    float w = m[3]*p.x + m[7]*p.y + m[11]*p.z + m[15];
    if (std::abs(w) > 0.00001f && std::abs(w - 1.0f) > 0.00001f) {
        return {x / w, y / w, z / w};
    }
    return {x, y, z};
}

Vector3 Matrix4::transformDirection(const Vector3& d) const {
    return {
        m[0]*d.x + m[4]*d.y + m[8]*d.z,
        m[1]*d.x + m[5]*d.y + m[9]*d.z,
        m[2]*d.x + m[6]*d.y + m[10]*d.z
    };
}

bool OrientedRect::intersectsLineSegmentOnAxis(const Vector2& start, const Vector2& end, const Vector2& axis) const {
    float axisLenSq = axis.lengthSq();
    if (axisLenSq < 0.00001f) return false;

    float p1 = start.dot(axis);
    float p2 = end.dot(axis);
    float segMin = std::min(p1, p2);
    float segMax = std::max(p1, p2);

    float rectCenter = center.dot(axis);
    float rad = std::abs(extents.x * std::cos(angle) * axis.x) + std::abs(extents.y * std::sin(angle) * axis.y);
    float rectMin = rectCenter - rad;
    float rectMax = rectCenter + rad;

    return !(segMax < rectMin || segMin > rectMax);
}

} // namespace caver
