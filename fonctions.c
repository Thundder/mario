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
    case SDLK_q:
      gameover = 1;
      break;
    case SDLK_SPACE:
      if (!launched)
      {
        if (reset)
        {
          launched = 1;
          reset = 0;
          angle = PI - launcherDirection * PI / LAUNCHER_DIV;
          dX = VELOCITY * cos(angle);
          dY = -VELOCITY * sin(angle);
        }
        else
          centralizeBubble();
      }
      break;
    case SDLK_LEFT:
      if (launcherRect.y >= LAUNCHER_HEIGHT)
      {
        launcherRect.y -= LAUNCHER_HEIGHT;
        launcherDirection-=1;
      }
      if (char1Rect.y >= CHAR1_HEIGHT)
      {
	char1Rect.y -= CHAR1_HEIGHT;
      }
      break;
    case SDLK_RIGHT:
      if (launcherRect.y <= 43 * LAUNCHER_HEIGHT)
      {
        launcherRect.y += LAUNCHER_HEIGHT;
        launcherDirection+=1;
      }
      if (char1Rect.y <= 87 * CHAR1_HEIGHT)
      {
	char1Rect.y += CHAR1_HEIGHT;
      }
      break;
    }
    break;
  }
}