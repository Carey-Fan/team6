#pragma once
#include <string>
#include <vector>

// 載入 PNG 圖片，解析為 RGBA 格式
bool loadPNG(const std::string& filename, std::vector<unsigned char>& image, unsigned& width, unsigned& height);