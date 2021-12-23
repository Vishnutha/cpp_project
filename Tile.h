#pragma once
#include"Entity.h"

class Tile :public Entity{
	Tile(coordinates c, SDL_Texture* te) :Entity(c, te)
	{

	}
};