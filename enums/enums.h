#pragma once
#include <unordered_map>
#include <string>
#include "raylib.h"

// Declare global theme color map (defined in enums.cpp)
extern std::unordered_map<std::string, Color> THEME_MAP;

// Utility function to fetch a color safely by key
Color GetThemeColor(const std::string& key);
