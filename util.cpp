#include "util.hpp"

double random_double() {
    static std::random_device seed_gen;
    static std::default_random_engine engine(seed_gen());
    static std::uniform_real_distribution<double> urd(0.0, 1.0);

    return urd(engine);
}

Vec3 random_Vec3() {
    return Vec3(random_double(), random_double(), random_double());
}

Vec3 inverseGamma(const Vec3& p) {
    static const double gammaFactor = 2.2;
    static const double recipGammaFactor = recip(gammaFactor);
    return Vec3(
        pow(p.getX(), recipGammaFactor),
        pow(p.getY(), recipGammaFactor),
        pow(p.getZ(), recipGammaFactor));
}