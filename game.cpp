#include <iostream>
#include "game.h"
using namespace std;
void Game::start(){


    while (g.window.isOpen()&&!vm.collision())
    {

            vm.update(g.get_keys());
            g.prepair();
            vm.Move();


                for(int i=0; i<vm.othercar.size();i++)
                {
                    g.othercar1(vm.othercar[i].xpos,vm.othercar[i].ypos);
                }


             g.mycar1(vm.myCar.xpos, vm.myCar.ypos);
        if (vm.collision())
        {
            cout <<"Barkhord \n";
        }
        g.show();

    }


}

