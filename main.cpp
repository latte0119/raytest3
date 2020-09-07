#include <iostream>

#include "Vec3.hpp"
using namespace std;
int main() {
    Vec3 p(3.0), q(5.0, 0.0, 2.0);

    p += q;
    p *= 3;
    cout << p.getX() << " " << p.getY() << " " << p.getZ() << endl;
}