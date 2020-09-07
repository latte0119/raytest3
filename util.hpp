#pragma once

#include <algorithm>
#include <cmath>
#include <limits>
#include <random>

#include "Vec3.hpp"

namespace {
const double PI = acos(-1);
const double INF = std::numeric_limits<double>::max();
}  // namespace

/*
1 : +
0 : 0
-1 : -
*/
inline int sign(const double x) {
    static const double EPS = 1e-8;
    if (x > EPS) return 1;
    if (x < -EPS) return -1;
    return 0;
}

inline bool equal(const double x, const double y) {
    return sign(x - y) == 0;
}

inline bool equal(const Vec3& p, const Vec3& q) {
    return equal(p.getX(), q.getX()) && equal(p.getY(), q.getY()) && equal(p.getZ(), q.getZ());
}

inline double toRadian(const double deg) { return deg / 180.0 * PI; }
inline double toDegree(const double rad) { return rad / PI * 180.0; }
inline double recip(const double x) { return 1.0 / x; }
inline double pow2(const double x) { return x * x; }
inline double pow5(const double x) { return x * x * x * x * x; }
inline double clamp(const double x, const double a, const double b) { return std::max(std::min(x, b), a); }
inline Vec3 clamp(const Vec3& p, const Vec3& a, const Vec3& b) {
    return Vec3(clamp(p.getX(), a.getX(), b.getX()),
                clamp(p.getY(), a.getY(), b.getY()),
                clamp(p.getZ(), a.getZ(), b.getZ()));
}

double random_double();
Vec3 random_Vec3();
Vec3 inverseGamma(const Vec3&);