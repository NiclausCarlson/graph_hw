#include "SDLDrawing.hpp"


namespace drawing::impl {

    void SDLWindowDestroyer::operator()(SDL_Window *w) const {
        SDL_DestroyWindow(w);
    }

    SDLDrawing::SDLDrawing(const SDlDrawSettings &draw_settings) :
            window(SDL_CreateWindow(draw_settings.title.c_str(),
                                    SDL_WINDOWPOS_CENTERED,
                                    SDL_WINDOWPOS_CENTERED,
                                    draw_settings.width, draw_settings.height,
                                    SDL_WINDOW_SHOWN)) {

    }

    void SDLDrawing::DrawCircle() {

    }

    void SDLDrawing::DrawLine() {

    }

    void SDLDrawing::Draw() {
        SDL_Delay(2000);

        // Cleanup and Quit
        SDL_Quit();

    }

}