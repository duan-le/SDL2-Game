#pragma once

#include "SDL2/SDL.h"
#include "GameObject.h"
#include "Animation.h"
#include "RigidBody.h"
#include "Collider.h"
#include <string>

class Character : public GameObject {
  public:
    Character(std::string textureID, int x, int y, int w, int h, int scale = 1, SDL_RendererFlip flip = SDL_FLIP_NONE);
    ~Character();
    virtual void update(float dt);
    virtual void draw();
    virtual void clean();
  
  private:
    std::string name;
    float jumpTime;
    float jumpForce;   
    bool isJumping;
    bool isGrounded;
    Animation* animation;
    RigidBody* rigidBody;
    Collider* collider;
    Vector lastSafePosition;
};
