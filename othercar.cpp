#include <iostream>
#include "othercar.h"
OtherCar::OtherCar(double x,double y,double speed )
{
    xpos=x;
    ypos=y;
    this->speed=speed;

}
void OtherCar::Move()
{

        ypos+=speed;
}
