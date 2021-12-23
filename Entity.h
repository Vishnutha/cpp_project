#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include"math.h"
class Entity{
private:
    SDL_Rect currentFrame;
    SDL_Texture* tex; 
    float x, y;
public:
    Entity(coordinates c, SDL_Texture* p_tex)
    {   
        x = c.x;
        y = c.y;
        tex = p_tex;
        currentFrame.x = 0;
        currentFrame.y = 0;
        currentFrame.w = 32;
        currentFrame.h = 32;
        
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
	SDL_Texture* getTex()
    {
        return tex;
    }
    SDL_Rect getCurrentFrame()
    {
        return currentFrame;
    }
};