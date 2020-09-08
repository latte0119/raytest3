#include "Image.hpp"

#include <fstream>
#include <iostream>
int main() {
    const int width = 200;
    const int height = 300;
    Image img(width, height);

    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            const double r = static_cast<double>(x) / width;
            const double g = static_cast<double>(y) / height;
            const double b = 1.0;
            img.setPixel(x, y, r, g, b);
        }
    }

    //    std::ofstream ofs("tmp.ppm");
    //  ofs << img;

    std::cout << img;
    return 0;
}