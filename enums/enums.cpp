#include "enums.h"
#include <unordered_map>
#include <string>
#include "raylib.h"

// Define global theme color map
std::unordered_map<std::string, Color> THEME_MAP = {
    {"ON_PRIMARY", WHITE},        // Primary foreground on primary background
    {"ON_SECONDARY", LIGHTGRAY},  // Secondary text/icon color
    {"ON_BACKGROUND", WHITE},     // Background fill
    {"ON_SURFACE", BLACK},        // Surfaces / panels
    {"ON_ERROR", RED},            // Error color
};

// Fetch a color by key name, or default to RAYWHITE if not found
Color GetThemeColor(const std::string& key) {
    auto it = THEME_MAP.find(key);
    if (it != THEME_MAP.end()) {
        return it->second;
    }

    return RAYWHITE; // fallback color
}
