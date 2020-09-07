#include "util.hpp"

#include <array>
#include <cassert>
#include <iostream>

#include "Vec3.hpp"
int main() {
    assert(equal(toRadian(30.0), PI / 6.0));
    assert(equal(toDegree(PI / 3.0), 60.0));

    assert(equal(clamp(3.0, 0.0, 4.0), 3.0));
    assert(equal(clamp(-2.0, 0.0, 4.0), 0.0));
    assert(equal(clamp(5.0, 0.0, 4.0), 4.0));

    assert(equal(clamp(Vec3(-3.0, 3.0, 2.0), Vec3(2.0, 0.0, 0.0), Vec3(5.0, 5.0, 1.0)), Vec3(2.0, 3.0, 1.0)));

    std::array<int, 10> cnt;
    cnt.fill(0);
    for (int i = 0; i < 1000; i++) {
        const double x = random_double();
        const int tmp = floor(x * 10);
        assert(0 <= tmp && tmp < 10);
        cnt[tmp]++;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) std::cout << "[ ";
        if (i) std::cout << " , ";
        std::cout << cnt[i];
    }
    std::cout << " ]" << std::endl;

    std::cout << random_Vec3() << std::endl;
}