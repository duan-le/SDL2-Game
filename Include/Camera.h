#pragma once

#include "Vector.h"
#include "SDL2/SDL.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 640
#define LEVEL_WIDTH 1920
#define LEVEL_HEIGHT 640

class Camera {
  public:
    static Camera* getInstance();
    void update(float dt);
    Vector getPosition();
    SDL_Rect getViewBox();
    void setTarget(Vector* target);

  private:
    Camera();
    Vector* target;
    Vector position;
    SDL_Rect viewBox;
    static Camera* instance;

};
