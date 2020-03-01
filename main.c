#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h> //On inclus la bibliothèque SDL2

int main(int arc, char *argv[])
{
    if (SDL_Init(SDL_INIT_EVERYTHING)>=0) //Grace à la fonction SDL_Init, on choisit de tout initialiser avec SDL_INIT_EVERYTHING. Si la fonction est vérifiée (si elle retourne un résultat non nul), on peut passer au code.
    {
        //...code...
    }
