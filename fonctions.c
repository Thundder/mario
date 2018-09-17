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
	//quand on appuie sur ECHAP pour quitter
      	gameover = 1;
      	break;  
    case SDLK_q:
	//quand on appuie sur Q pour quitter
      	gameover = 1;
      	break;
	case SDLK_SPACE:
      		//quand on appuie sur espace
		    
      		break;
    	case SDLK_LEFT:
      		//quand on va à gauche
		    
      		break;
    	case SDLK_RIGHT:
      		//quand on va à droite
		    
      		break;
    	}
    	break;
  	}
}
