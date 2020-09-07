#include "Vec3.hpp"

Vec3::Vec3() : x(0.0), y(0.0), z(0.0) {}
Vec3::Vec3(const double _x) : x(_x), y(_x), z(_x) {}
Vec3::Vec3(const double _x, const double _y, const double _z) : x(_x), y(_y), z(_z) {}

Vec3 Vec3::operator-() const {
    return Vec3(-x, -y, -z);
}

Vec3& Vec3::operator+=(const Vec3& rhs) {
    x += rhs.x;
    y += rhs.y;
    z += rhs.z;
    return *this;
}

Vec3& Vec3::operator-=(const Vec3& rhs) {
    x -= rhs.x;
    y -= rhs.y;
    z -= rhs.z;
    return *this;
}

Vec3& Vec3::operator*=(const Vec3& rhs) {
    x *= rhs.x;
    y *= rhs.y;
    z *= rhs.z;
    return *this;
}

Vec3& Vec3::operator*=(const double rhs) {
    x *= rhs;
    y *= rhs;
    z *= rhs;
    return *this;
}

Vec3& Vec3::operator/=(const Vec3& rhs) {
    x /= rhs.x;
    y /= rhs.y;
    z /= rhs.z;
    return *this;
}

Vec3& Vec3::operator/=(const double rhs) {
    x /= rhs;
    y /= rhs;
    z /= rhs;
    return *this;
}

Vec3 operator+(const Vec3& lhs, const Vec3& rhs) {
    return Vec3(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
}

Vec3 operator-(const Vec3& lhs, const Vec3& rhs) {
    return Vec3(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
}

Vec3 operator*(const Vec3& lhs, const Vec3& rhs) {
    return Vec3(lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z);
}

Vec3 operator*(const Vec3& lhs, const double rhs) {
    return Vec3(lhs.x * rhs, lhs.y * rhs, lhs.z * rhs);
}

Vec3 operator*(const double lhs, const Vec3& rhs) {
    return Vec3(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z);
}

Vec3 operator/(const Vec3& lhs, const Vec3& rhs) {
    return Vec3(lhs.x / rhs.x, lhs.y / rhs.y, lhs.z / rhs.z);
}

Vec3 operator/(const Vec3& lhs, const double rhs) {
    return Vec3(lhs.x / rhs, lhs.y / rhs, lhs.z / rhs);
}

Vec3 operator/(const double lhs, const Vec3& rhs) {
    return Vec3(lhs / rhs.x, lhs / rhs.y, lhs / rhs.z);
}