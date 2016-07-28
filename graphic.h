#ifndef GRAPHIC_H_INCLUDED
#define GRAPHIC_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Update.h"
#include <vector>
#include "event.h"
class Graphic{
    public:
    Keys_Event get_keys();  //to get the struct keys from user.
    sf::RectangleShape mycar_shape;
    std::vector<sf::RectangleShape> othercar_shape;
    sf::RectangleShape line1;
    sf::RectangleShape line2;
    sf::RectangleShape line3;
    Graphic();
    void surface();
    void mycar1(int x, int y);
    void print_score();
    void start();
    void main();
    sf::RenderWindow window;
    void show();
    int othercar1(int x, int y);
    void prepair();
    bool check();
};


#endif // GRAPHIC_H_INCLUDED
