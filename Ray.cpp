#include "Ray.hpp"

#include "Vec3.hpp"

Ray::Ray(const Vec3& _origin, const Vec3& _direction)
    : origin(_origin), direction(_direction) {}

std::ostream& operator<<(std::ostream& ost, const Ray& r) {
    ost << "{ origin : " << r.origin << " , "
        << "direction : " << r.direction << " }";
    return ost;
}