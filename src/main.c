#include <SDL.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    // SDL_version nb;
    // SDL_VERSION(&nb)
    // printf("SDL %d.%d.%d !\n", nb.major, nb.minor, nb.patch);

    // return 0;
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0) {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    }
    printf("Initialization successful! \n");

    SDL_Quit();

    return 0;


    
}
