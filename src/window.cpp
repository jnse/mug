#include <SDL2/SDL.h>
#include "mug/window.h"
#include "mug/app.h"

namespace mug
{

    window::window(int x, int y, int w, int h) 
    {
        _geometry.x = x;
        _geometry.y = y;
        _geometry.h = h;
        _geometry.w = w;
    }

    window::~window()
    {

    }

    void window::draw()
    {
        SDL_Renderer* r = app::get().renderer();
        SDL_SetRenderDrawColor(r, 255, 255, 255, 255);
        SDL_RenderFillRect(r, &_geometry);
    }

}
