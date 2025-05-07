#include "image_loader.h"
#include "lodepng.h"
#include <iostream>

bool loadPNG(const std::string& filename, std::vector<unsigned char>& image, unsigned& width, unsigned& height) {
unsigned error = lodepng::decode(image, width, height, filename);
if (error) {
std::cerr << "讀取 PNG 錯誤: " << lodepng_error_text(error) << std::endl;
return false;
}
return true;
}