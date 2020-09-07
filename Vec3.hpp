#pragma once

#include <iostream>

struct Vec3 {
    Vec3();
    explicit Vec3(double);
    Vec3(double, double, double);

    friend std::ostream& operator<<(std::ostream&, const Vec3&);

    Vec3 operator-() const;

    Vec3& operator+=(const Vec3&);
    Vec3& operator-=(const Vec3&);
    Vec3& operator*=(const Vec3&);
    Vec3& operator*=(double);
    Vec3& operator/=(const Vec3&);
    Vec3& operator/=(double);

    friend Vec3 operator+(const Vec3&, const Vec3&);
    friend Vec3 operator-(const Vec3&, const Vec3&);
    friend Vec3 operator*(const Vec3&, const Vec3&);
    friend Vec3 operator*(const Vec3&, double);
    friend Vec3 operator*(double, const Vec3&);
    friend Vec3 operator/(const Vec3&, const Vec3&);
    friend Vec3 operator/(const Vec3&, double);
    friend Vec3 operator/(double, const Vec3&);

    friend double dot(const Vec3&, const Vec3&);
    friend Vec3 cross(const Vec3&, const Vec3&);

    double getX() const;
    double getY() const;
    double getZ() const;

   private:
    double x;
    double y;
    double z;
};

inline double Vec3::getX() const {
    return x;
}

inline double Vec3::getY() const {
    return y;
}

inline double Vec3::getZ() const {
    return z;
}

inline double dot(const Vec3& lhs, const Vec3& rhs) {
    return lhs.x * rhs.x +
           lhs.y * rhs.y +
           lhs.z * rhs.z;
}

inline Vec3 cross(const Vec3& lhs, const Vec3& rhs) {
    return Vec3(lhs.y * rhs.z - lhs.z * rhs.y,
                lhs.z * rhs.x - lhs.x * rhs.z,
                lhs.x * rhs.y - lhs.y * rhs.x);
}