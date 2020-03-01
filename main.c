#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h>

int main(int arc, char *argv[])
{
    SDL_Window *pWindow=NULL;
    SDL_Renderer *pRenderer=NULL; //Cette fois-ci, on cree aussi un renderer

    //Un renderer est un espace de rendu de la fenetre, c'est à dire l'endroit ou l'on va executer les instructions avant de les afficher dans la fenetre.

    if (SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
        pWindow=SDL_CreateWindow("Fenetre de Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 780, SDL_WINDOW_SHOWN);

        if (pWindow != NULL)
        {
            pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            //On cree un renderer grace a SDL_CreateRenderer qui a comme arguments la fenetre a laquelle le renderer est associe, son index et ses flags

            SDL_RenderPresent(pRenderer); //On envoie les instructions du renderer a la fenetre
            SDL_Delay(2000);

            SDL_DestroyRenderer(pRenderer); //On detruit le renderer
            SDL_DestroyWindow(pWindow);
            SDL_Quit();
        }
        else
        {
            return 0;
        }
    }
}
