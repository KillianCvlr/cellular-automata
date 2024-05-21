#pragma once
#include "RenderHandler.hpp"
#include "God.hpp"

#include <SDL.h>
#include <iostream>
#include <memory>

#define SCREEN_X 1300
#define SCREEN_Y 1000


#define COLUMN_NUMBER 300
#define LINE_NUMBER 300

#define FPS 40

enum class WindowState {
    RUNNING,
    PAUSE,
    EXIT
};



class Window {
public:
    Window();
    ~Window();

    void mainLoop();

    WindowState handleEvents(SDL_Event event, WindowState const& windowState);

private:

    RenderHandler renderHandler_;
    WindowState windowState_;
};