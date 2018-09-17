#include "declarations.h"

/*Function for key entries*/
void HandleEvent(SDL_Event event)
{
  switch (event.type)
  {
  case SDL_QUIT:
    gameover = 1;
    break;

  case SDL_KEYDOWN:
    switch (event.key.keysym.sym)
    {
    case SDLK_ESCAPE:
      //quand on appuie sur ECHAP pour quitter le jeu
      gameover = 1;
      break;
    case SDLK_q:
      //quand on appuie sur Q pour quitter le jeu
      gameover = 1;
      break;
    case SDLK_SPACE:
      //quand on appuie sur ESPACE
      
      break;
    case SDLK_LEFT:
      //quand on appuie sur flèche gauche
      
      break;
    case SDLK_RIGHT:
      //quand on appuie sur flèche droite
      
      break;
    }
    break;
  }
}