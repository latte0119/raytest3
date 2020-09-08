#include "Image.hpp"

#include <iostream>

#include "Vec3.hpp"
#include "util.hpp"

Image::Image(const int _width, const int _height) : width(_width), height(_height), pixels(_width * _height) {}

std::ostream& operator<<(std::ostream& ost, const Image& img) {
    ost << "P3" << std::endl;
    ost << img.getWidth() << " " << img.getHeight() << std::endl;
    ost << 255 << std::endl;

    for (int y = 0; y < img.getHeight(); y++) {
        for (int x = 0; x < img.getWidth(); x++) {
            Vec3 p = img.getPixel(x, y);
            p = clamp(p, Vec3(0.0), Vec3(1.0));
            p = inverseGamma(p);
            const int r = static_cast<int>(p.getX() * 255.99);
            const int g = static_cast<int>(p.getY() * 255.99);
            const int b = static_cast<int>(p.getZ() * 255.99);
            ost << r << " " << g << " " << b << std::endl;
        }
    }
    return ost;
}