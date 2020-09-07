
#include "Vec3.hpp"

#include <cassert>

#include "util.hpp"

int main() {
    Vec3 p(2.0, 4.0, -3.0), q(5.0, 0.0, -3.0);
    double k = 2.0;

    assert(equal(dot(p, q), 19.0));

    assert(equal(cross(p, q), Vec3(-12.0, -9.0, -20.0)));

    assert(equal(p + q, Vec3(7.0, 4.0, -6.0)));
    assert(equal(p - q, Vec3(-3.0, 4.0, 0.0)));
    assert(equal(p * q, Vec3(10.0, 0.0, 9.0)));
    assert(equal(p * k, Vec3(4.0, 8.0, -6.0)));
}