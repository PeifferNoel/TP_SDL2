//une Texture, c'est comme une Surface sauf qu'on ne peut pas modifier ses pixels 1 a 1

#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h>

int main(int arc, char *argv[])
{
    SDL_Window *pWindow=NULL;
    SDL_Renderer *pRenderer=NULL;


    if (SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
        pWindow=SDL_CreateWindow("Fenetre de Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 780, SDL_WINDOW_SHOWN);

        if (pWindow != NULL)
        {
            pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            SDL_Texture *pTexture = SDL_CreateTexture(pRenderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET,200,100);
                                                      //Le renderer, le format de pixel, les restrictions d'accès, la largeur et la hauteur

            SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, 255);
            SDL_RenderClear(pRenderer);


            SDL_RenderPresent(pRenderer);
            SDL_Delay(2000);

            SDL_DestroyTexture(pTexture); //On oublie pas de détruire la Texture et de libérer son espace alloué
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
