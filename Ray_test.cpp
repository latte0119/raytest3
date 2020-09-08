#include "Ray.hpp"

#include <cassert>
#include <iostream>

#include "Vec3.hpp"
#include "util.hpp"

int main() {
    Ray r(Vec3(0.0), Vec3(1.0, 0.0, 1.0));

    assert(equal(r.getOrigin(), Vec3(0.0)));
    assert(equal(r.getDirection(), Vec3(1.0, 0.0, 1.0)));

    assert(equal(r(3.0), Vec3(3.0, 0.0, 3.0)));

    std::cout << "r : " << r << std ::endl;
    std::cout << "r ( 0.2 ) : " << r(0.2) << std::endl;
}