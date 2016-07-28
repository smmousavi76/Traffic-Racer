#ifndef MYCAR_H_INCLUDED
#define MYCAR_H_INCLUDED
#include "event.h"
using namespace std;
class Car{
public:
    int xpos;
    bool del;
    int ypos;
    int v;//male enemy car
    int speed;
    int live;
    Car();
    bool ManualMove(Keys_Event);
    bool check();
};


#endif // MYCAR_H_INCLUDED
