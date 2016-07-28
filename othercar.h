#ifndef OTHERCAR_H_INCLUDED
#define OTHERCAR_H_INCLUDED
#include <vector>
class OtherCar{
public:
double xpos;
double ypos;
double speed;
OtherCar(double x,double y,double speed);
void Move();
//int move_y(int i);
//bool del;
};

#endif // OTHERCAR_H_INCLUDED
