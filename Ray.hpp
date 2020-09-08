#pragma once

#include <iostream>

#include "Vec3.hpp"

struct Ray {
    Ray(const Vec3&, const Vec3&);
    Vec3 operator()(double) const;

    friend std::ostream& operator<<(std::ostream&, const Ray&);

    Vec3
    getOrigin() const;
    Vec3 getDirection() const;

   private:
    const Vec3 origin;
    const Vec3 direction;
};

inline Vec3 Ray::operator()(const double t) const {
    return origin + direction * t;
}

inline Vec3 Ray::getOrigin() const {
    return origin;
}

inline Vec3 Ray::getDirection() const {
    return direction;
}