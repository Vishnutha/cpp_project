#pragma once
#include<iostream>
using namespace std;
class coordinates
{   
public:
    float x,y;
    coordinates()
    :x(0.0f), y(0.0f)
    {}
    coordinates(float p_x, float p_y)
    :x(p_x), y(p_y)
    {}
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};
