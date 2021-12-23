#pragma once
#include"Tile.h"
#include"hole.h"
#include"math.h"
#include"Entity.h"
#include<vector>
using namespace std;

class Ball :public Entity
{
private:
	coordinates velocity;
	coordinates pos_target;
	coordinates launch_velocity;
	coordinates i_mouse_pos;
	float speed;
	float launch_speed;
	float friction = 0.001;
	bool can_move;
	bool win = false;
	int index;
	int direction_x = 1;
	int direction_y = 1;
	int strokes = 0;
	vector<Entity> grade_points;
	vector<Entity> powerbar;
public:
	Ball(coordinates pos,SDL_Texture* tex, SDL_Texture* point_tex, SDL_Texture* p_powerMXFG, SDL_Texture* p_powerMXBG, int index):Entity(pos,tex)
	{
		this->index = index;
		grade_points.push_back(Entity(coordinates(-64, -64), point_tex));
		powerbar.push_back( Entity(coordinates(-64, -64), p_powerMXBG));
		powerbar.push_back(Entity(coordinates(-64, -64), p_powerMXFG));
	}
	void set_velocity(float x , float y)
	{
		velocity.x = x;
		velocity.y = y;
	}

	
};