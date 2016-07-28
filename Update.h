#ifndef BACKEND_H_INCLUDED
#define BACKEND_H_INCLUDED

#include "Car.h"
#include "othercar.h"
#include "event.h"


using namespace std;
class Update{
public:
Car myCar;
std::vector<OtherCar> othercar;
bool collision();
void Move();
Update();
void newEnemy();
//Graphic s;
void update(Keys_Event keys);

};

#endif // BACKEND_H_INCLUDED
