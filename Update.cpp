#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "Update.h"
using namespace std;

bool Update::collision()
{
    for(int i=0;i<othercar.size();i++)
        if(myCar.ypos<=othercar[i].ypos+60&& myCar.ypos>=othercar[i].ypos){
            if(myCar.xpos<=othercar[i].xpos+50 && myCar.xpos>=othercar[i].xpos)
            {
                return 1;
            }
        }
    return 0;

}

void Update::Move()
{
    for(int i=0 ; i<othercar.size() ; i++)
    {


        othercar[i].Move();

    }

}
Update::Update()
{
    for(int i=0 ; i<1000 ; i++)
    {

        Update::newEnemy();

    }


}

void Update::newEnemy()
{
    //srand(time(0));
    if(othercar.size()==0)
    {
        OtherCar ne((rand()%4)*200+100,-20,20);
        othercar.push_back(ne);
    }
    else
    {
        OtherCar ne((rand()%4)*200+100,othercar.back().ypos-200,othercar.back().speed);
        othercar.push_back(ne);
    }

}

void Update::update(Keys_Event keys)
{
    myCar.ManualMove(keys);
    return;
}





