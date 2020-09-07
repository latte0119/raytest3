#include "Image.hpp"

#include "Vec3.hpp"

Image::Image(const int _width, const int _height) : width(_width), height(_height), pixels(_width * _height) {}
