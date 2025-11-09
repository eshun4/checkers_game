#ifndef PLAYGROUND_H // Replace MYHEADER_H with a unique identifier based on your filename
#define PLAYGROUND_H
// ...existing code...
#pragma once
#include "raylib.h"

class Playground {
    private:
        int windowWidth;
        int windowHeight;

    public:
        void start_game();
        Playground() {
            windowWidth = GetMonitorWidth(GetCurrentMonitor());
            windowHeight = GetMonitorHeight(GetCurrentMonitor());
        }
        ~Playground() {};

};

#endif // PLAYGROUND_H
