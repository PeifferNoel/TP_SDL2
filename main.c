#include <stdio.h>
#include <stdlib.h>
#include <SDL2\SDL.h> //On inclus la biblioth�que SDL2

int main(int arc, char *argv[])
{
    if (SDL_Init(SDL_INIT_EVERYTHING)>=0) //Grace � la fonction SDL_Init, on choisit de tout initialiser avec SDL_INIT_EVERYTHING. Si la fonction est v�rifi�e (si elle retourne un r�sultat non nul), on peut passer au code.
    {
        //...code...
    }
