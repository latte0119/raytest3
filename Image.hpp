#pragma once

#include <memory>
#include <vector>

#include "Vec3.hpp"

struct Image {
    Image(int, int);

    int getWidth() const;
    int getHeight() const;
    Vec3 getPixel(int, int) const;
    Vec3 setPixel(int, int, const Vec3&);

   private:
    const int width;
    const int height;
    std::vector<Vec3> pixels;
};

inline int Image::getWidth() const {
    return width;
}

inline int Image::getHeight() const {
    return height;
}

inline Vec3 Image::getPixel(const int x, const int y) const {
    const int idx = y * width + x;
    return pixels[idx];
}

inline Vec3 Image::setPixel(const int x, const int y, const Vec3& p) {
    const int idx = y * width + x;
    pixels[idx] = p;
}
