#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h>

int main(int arc, char *argv[])
{
    SDL_Window *pWindow=NULL;
    SDL_Renderer *pRenderer=NULL;
    SDL_Surface* pSurface = NULL; //On initialise la surface a NULL

    if (SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
        pWindow=SDL_CreateWindow("Fenetre de Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 780, SDL_WINDOW_SHOWN);

        if (pWindow != NULL)
        {
            pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

            SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, 255);
            SDL_RenderClear(pRenderer);

            pSurface = SDL_CreateRGBSurface (0, 100, 100, 32, 0, 0, 0, 0);
                                            //Les flags, la largueur, la hauteur et le nombre de bit par pixel de la surface, les 4 derniers correspondent aux masques RGBA

            SDL_RenderPresent(pRenderer);
            SDL_Delay(2000);

            SDL_FreeSurface(pSurface);      //On détruit la surface et on libèère son espace alloué
            SDL_DestroyRenderer(pRenderer);
            SDL_DestroyWindow(pWindow);
            SDL_Quit();
        }
        else
        {
            return 0;
        }
    }
}
