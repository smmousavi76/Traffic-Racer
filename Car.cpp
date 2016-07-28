#include <iostream>
#include "car.h"

using namespace std;

Car::Car()
{
    live=5;
    xpos=450;
    ypos=450;
    speed=6;
    del=0;
}
bool Car::check(){
if(xpos+60>800)
{
    xpos=800-60;

return 0;
}
if(xpos<0)
{
xpos=0;
return 0;
}
return 1;



}
bool Car::ManualMove(Keys_Event keys)
{
    if(keys.right)
    {
    this->xpos += speed;
    if(!check())
    return true;
    }
    if(keys.left)
    {
    this->xpos -= speed;
    if(!check())
    return false;
    }
}

