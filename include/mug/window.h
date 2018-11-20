#ifndef WINDOW_H_INCLUDE
#define WINDOW_H_INCLUDE

namespace mug
{

    class window
    {

        SDL_Rect _geometry;

        public:

            window(int x, int y, int w, int h);
            virtual ~window();

            virtual void draw();

    };

}

#endif
