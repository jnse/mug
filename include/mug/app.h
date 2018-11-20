#ifndef APP_H_INCLUDE
#define APP_H_INCLUDE

#include <mutex>
#include <memory>
#include <SDL2/SDL.h>

namespace mug
{

    class app
    {

        static std::unique_ptr<app> _instance;
        static std::once_flag _allocated;

        SDL_Renderer* _renderer;
        SDL_Window* _window;

        public:

            static app& get();
            void init();
            void draw();
            SDL_Renderer* renderer();
    };

}

#endif
