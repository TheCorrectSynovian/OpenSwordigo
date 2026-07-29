#ifndef CAVER_MATH_H
#define CAVER_MATH_H

#include <cmath>
#include <cstdint>
#include <algorithm>

namespace caver {

struct Vector2 {
    float x{0.0f};
    float y{0.0f};

    constexpr Vector2() = default;
    constexpr Vector2(float x_, float y_) : x(x_), y(y_) {}

    Vector2 operator+(const Vector2& rhs) const { return {x + rhs.x, y + rhs.y}; }
    Vector2 operator-(const Vector2& rhs) const { return {x - rhs.x, y - rhs.y}; }
    Vector2 operator*(float scalar) const { return {x * scalar, y * scalar}; }
    Vector2 operator/(float scalar) const { return {x / scalar, y / scalar}; }

    Vector2& operator+=(const Vector2& rhs) { x += rhs.x; y += rhs.y; return *this; }
    Vector2& operator-=(const Vector2& rhs) { x -= rhs.x; y -= rhs.y; return *this; }
    Vector2& operator*=(float scalar) { x *= scalar; y *= scalar; return *this; }

    float lengthSq() const { return x * x + y * y; }
    float length() const { return std::sqrt(lengthSq()); }
    Vector2 normalized() const {
        float len = length();
        return len > 0.00001f ? Vector2(x / len, y / len) : Vector2(0, 0);
    }

    float dot(const Vector2& rhs) const { return x * rhs.x + y * rhs.y; }
};

struct Vector3 {
    float x{0.0f};
    float y{0.0f};
    float z{0.0f};

    constexpr Vector3() = default;
    constexpr Vector3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    Vector3 operator+(const Vector3& rhs) const { return {x + rhs.x, y + rhs.y, z + rhs.z}; }
    Vector3 operator-(const Vector3& rhs) const { return {x - rhs.x, y - rhs.y, z - rhs.z}; }
    Vector3 operator*(float scalar) const { return {x * scalar, y * scalar, z * scalar}; }
    Vector3 operator/(float scalar) const { return {x / scalar, y / scalar, z / scalar}; }

    Vector3& operator+=(const Vector3& rhs) { x += rhs.x; y += rhs.y; z += rhs.z; return *this; }
    Vector3& operator-=(const Vector3& rhs) { x -= rhs.x; y -= rhs.y; z -= rhs.z; return *this; }
    Vector3& operator*=(float scalar) { x *= scalar; y *= scalar; z *= scalar; return *this; }

    float lengthSq() const { return x * x + y * y + z * z; }
    float length() const { return std::sqrt(lengthSq()); }
    Vector3 normalized() const {
        float len = length();
        return len > 0.00001f ? Vector3(x / len, y / len, z / len) : Vector3(0, 0, 0);
    }

    float dot(const Vector3& rhs) const { return x * rhs.x + y * rhs.y + z * rhs.z; }
    Vector3 cross(const Vector3& rhs) const {
        return {
            y * rhs.z - z * rhs.y,
            z * rhs.x - x * rhs.z,
            x * rhs.y - y * rhs.x
        };
    }
};

struct Vector4 {
    float x{0.0f};
    float y{0.0f};
    float z{0.0f};
    float w{1.0f};

    constexpr Vector4() = default;
    constexpr Vector4(float x_, float y_, float z_, float w_) : x(x_), y(y_), z(z_), w(w_) {}
};

struct FloatColor {
    float r{1.0f};
    float g{1.0f};
    float b{1.0f};
    float a{1.0f};

    constexpr FloatColor() = default;
    constexpr FloatColor(float r_, float g_, float b_, float a_) : r(r_), g(g_), b(b_), a(a_) {}
};

struct Color {
    uint8_t r{255};
    uint8_t g{255};
    uint8_t b{255};
    uint8_t a{255};

    constexpr Color() = default;
    constexpr Color(uint8_t r_, uint8_t g_, uint8_t b_, uint8_t a_) : r(r_), g(g_), b(b_), a(a_) {}

    FloatColor toFloatColor() const {
        return {r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f};
    }
};

struct Matrix4 {
    float m[16]{
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 1
    };

    static Matrix4 identity() { return Matrix4(); }
    static Matrix4 translation(const Vector3& t);
    static Matrix4 scale(const Vector3& s);
    static Matrix4 rotationX(float degrees);
    static Matrix4 rotationY(float degrees);
    static Matrix4 rotationZ(float degrees);
    static Matrix4 perspectiveFov(float fovDeg, float aspect, float nearP, float farP);
    static Matrix4 lookAt(const Vector3& eye, const Vector3& target, const Vector3& up);
    static Matrix4 ortho(float left, float right, float bottom, float top, float nearP, float farP);

    Matrix4 operator*(const Matrix4& rhs) const;
    Vector3 transformPoint(const Vector3& p) const;
    Vector3 transformDirection(const Vector3& d) const;
};

struct AABB {
    Vector3 minBounds{-1, -1, -1};
    Vector3 maxBounds{1, 1, 1};

    bool intersects(const AABB& other) const {
        return (minBounds.x <= other.maxBounds.x && maxBounds.x >= other.minBounds.x) &&
               (minBounds.y <= other.maxBounds.y && maxBounds.y >= other.minBounds.y) &&
               (minBounds.z <= other.maxBounds.z && maxBounds.z >= other.minBounds.z);
    }
};

struct OrientedRect {
    Vector2 center{0, 0};
    Vector2 extents{1, 1};
    float angle{0.0f};

    bool intersectsLineSegmentOnAxis(const Vector2& start, const Vector2& end, const Vector2& axis) const;
};

struct Rectangle {
    float x{0.0f};
    float y{0.0f};
    float width{0.0f};
    float height{0.0f};

    constexpr Rectangle() = default;
    constexpr Rectangle(float x_, float y_, float w_, float h_) : x(x_), y(y_), width(w_), height(h_) {}
};

} // namespace caver

#endif // CAVER_MATH_H
