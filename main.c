#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h>

int main(int arc, char *argv[])
{
    SDL_Window *pWindow=NULL; //D'abord, on cr�e un pointeur fenetre

    if (SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
        pWindow = SDL_CreateWindow("Fenetre de Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 780, SDL_WINDOW_SHOWN);
        //Ensuite, on cr�e la fenetre gr�ce a SDL_CreateWindow qui prend en argument: Le titre, La position en x, La position en y, la Largeur, la Hauteur et les diff�rents flags
    }
    return 0;
}
