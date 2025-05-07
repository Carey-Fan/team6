#include "image_printer.h"
#include <iostream>

void printRGBPixels(const std::vector<unsigned char>& image, unsigned width, unsigned height) {
	for (unsigned y = 0; y < height; ++y) {
		for (unsigned x = 0; x < width; ++x) {
			size_t index = 4 * (y * width + x);
			unsigned char r = image[index + 0];
			unsigned char g = image[index + 1];
			unsigned char b = image[index + 2];
			std::cout << "Pixel (" << x << ", " << y << ") - "
			<< "R: " << static_cast<int>(r) << ", "
			<< "G: " << static_cast<int>(g) << ", "
			<< "B: " << static_cast<int>(b) << std::endl;
	}
	}
}