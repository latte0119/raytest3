#pragma once

#include "Vec3.hpp"

const double EPS = 1e-8;

/*
1 : +
0 : 0
-1 : -
*/
inline int sign(const double x) {
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