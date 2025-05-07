#include "image_loader.h"
#include "image_printer.h"
#include <iostream>

int main() {
    const std::string filename = "example.png";
    std::vector<unsigned char> image;
    unsigned width, height;
    if (!loadPNG(filename, image, width, height)) {
        std::cerr << "Cannot load image!" << std::endl;
        return 1;
    }

    printRGBPixels(image, width, height);
    return 0;
}