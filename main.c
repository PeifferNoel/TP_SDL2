//Pour gérer la couleur, on utilise SDL_SetRenderDrawColor, qui attend les paramètres RGBA (A étant la transparence de la couleur)#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h>

int main(int arc, char *argv[])
{
    SDL_Window *pWindow=NULL;
    SDL_Renderer *pRenderer=NULL;


    if (SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
        pWindow= SDL_CreateWindow("SDL_Application", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 780, SDL_WINDOW_SHOWN);

        if (pWindow != NULL)
        {
            pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            SDL_Rect rectangleV = {50,50,100,100};
            SDL_Rect rectangleP = {600, 50, 100, 100};

            //On met le fond en rouge
            SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
            SDL_RenderClear(pRenderer);

            //On dessine le rectangle Vide
            SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
            SDL_RenderDrawRect(pRenderer, &rectangleV);

            //On dessine le rectangle Plein
            SDL_RenderFillRect (pRenderer, &rectangleP);

            SDL_RenderPresent(pRenderer);
            SDL_Delay(10000);


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

