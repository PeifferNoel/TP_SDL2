//SDL_RenderDrawPoint(pRenderer, 50, 50); -> Sert à dessiner un point (Renderer selectionné, position en x du point, position en y)
//Pour les rectangles, on doit d'abord les déclarer avant de les utiliser:
//SDL_Rect nomDuRectangle = {point de départ en x , point de départ en y, largeur, hauteur};
//Ensuite, on utilise SDL_RenderDrawRect, qui attends 2 paramètres: le renderer et le rectangle que l'on souhaite afficher
