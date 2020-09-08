#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "Vec3.hpp"

struct Image {
    Image(int, int);

    int getWidth() const;
    int getHeight() const;
    Vec3 getPixel(int, int) const;
    void setPixel(int, int, const Vec3&);
    void setPixel(int, int, double, double, double);
    friend std::ostream& operator<<(std::ostream&, const Image&);

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

inline void Image::setPixel(const int x, const int y, const Vec3& p) {
    const int idx = y * width + x;
    pixels[idx] = p;
}

inline void Image::setPixel(const int x, const int y, const double r, const double g, const double b) {
    const int idx = y * width + x;
    pixels[idx] = Vec3(r, g, b);
}