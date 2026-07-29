#include "caver/math/caver_math.h"
#include <cmath>
#include <cstring>

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

Matrix4 Matrix4::rotationX(float degrees) {
    Matrix4 res = identity();
    float radians = degrees * 0.017453292519943295f;
    float c = std::cos(radians);
    float s = std::sin(radians);
    res.m[5] = c;   res.m[9] = -s;
    res.m[6] = s;   res.m[10] = c;
    return res;
}

Matrix4 Matrix4::rotationY(float degrees) {
    Matrix4 res = identity();
    float radians = degrees * 0.017453292519943295f;
    float c = std::cos(radians);
    float s = std::sin(radians);
    res.m[0] = c;   res.m[8] = s;
    res.m[2] = -s;  res.m[10] = c;
    return res;
}

Matrix4 Matrix4::rotationZ(float degrees) {
    Matrix4 res = identity();
    float radians = degrees * 0.017453292519943295f;
    float c = std::cos(radians);
    float s = std::sin(radians);
    res.m[0] = c;  res.m[4] = -s;
    res.m[1] = s;  res.m[5] = c;
    return res;
}

Matrix4 Matrix4::perspectiveFov(float fovDeg, float aspect, float nearP, float farP) {
    Matrix4 res;
    std::memset(res.m, 0, sizeof(res.m));
    float fovRad = fovDeg * 0.017453292519943295f;
    float f = 1.0f / std::tan(fovRad * 0.5f);

    res.m[0]  = f / aspect;
    res.m[5]  = f;
    res.m[10] = (farP + nearP) / (nearP - farP);
    res.m[11] = -1.0f;
    res.m[14] = (2.0f * farP * nearP) / (nearP - farP);
    return res;
}

Matrix4 Matrix4::lookAt(const Vector3& eye, const Vector3& target, const Vector3& up) {
    Vector3 f = (target - eye).normalized();
    Vector3 s = f.cross(up).normalized();
    Vector3 u = s.cross(f);

    Matrix4 res = identity();
    res.m[0] = s.x;  res.m[4] = s.y;  res.m[8]  = s.z;
    res.m[1] = u.x;  res.m[5] = u.y;  res.m[9]  = u.z;
    res.m[2] = -f.x; res.m[6] = -f.y; res.m[10] = -f.z;

    res.m[12] = -s.dot(eye);
    res.m[13] = -u.dot(eye);
    res.m[14] =  f.dot(eye);
    return res;
}

Matrix4 Matrix4::ortho(float left, float right, float bottom, float top, float nearP, float farP) {
    Matrix4 res = identity();
    res.m[0]  = 2.0f / (right - left);
    res.m[5]  = 2.0f / (top - bottom);
    res.m[10] = -2.0f / (farP - nearP);
    res.m[12] = -(right + left) / (right - left);
    res.m[13] = -(top + bottom) / (top - bottom);
    res.m[14] = -(farP + nearP) / (farP - nearP);
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
