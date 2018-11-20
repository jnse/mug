#include <SDL2/SDL.h>
#include <emscripten.h>
#include "mug/app.h"
#include "mug/window.h"

int main(int argc, char* argv[])
{
    // Create application.
    mug::app::get().init();
    // Create a window.
    mug::window win(20,20,200,100);
    //  Draw scene.
    win.draw();
    mug::app::get().draw();
}
