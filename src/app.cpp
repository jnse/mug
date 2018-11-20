#include <mutex>
#include <memory>
#include "mug/app.h"

namespace mug
{

    std::unique_ptr<app> app::_instance;
    std::once_flag app::_allocated;

    app& app::get()
    {
        std::call_once(_allocated,[]{
            _instance.reset(new app);
        });
        return *_instance.get();
    }

    void app::init()
    {
        SDL_Init(SDL_INIT_VIDEO);
        SDL_CreateWindowAndRenderer(10, 10, 10, &_window, &_renderer);
        // background
        SDL_SetRenderDrawColor(_renderer, 255, 0, 0, 255);
        SDL_RenderClear(_renderer);    
    }

    void app::draw()
    {
       SDL_RenderPresent(_renderer);
    }

    SDL_Renderer* app::renderer()
    {
        return _renderer;
    }

}
