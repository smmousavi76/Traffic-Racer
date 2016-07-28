#include <iostream>
#include "graphic.h"

using namespace std;

Graphic::Graphic() : window(sf::VideoMode(800, 600), "My window") , line1(sf::Vector2f(8, 600)),line2(sf::Vector2f(4,600)),line3(sf::Vector2f(4,800))
{
    window.setFramerateLimit(30);
surface();
line1.move(400,0);
line2.move(200,0);
line3.move(600,0);

};

void  Graphic::show(){
window.clear();
for(int i=0;i<othercar_shape.size() ;i++)
{
    window.draw(othercar_shape[i]);

}

window.draw(mycar_shape);
window.draw(line1);
window.draw(line2);
window.draw(line3);

window.display();

}
void Graphic::surface(){
sf::RectangleShape line1(sf::Vector2f(200, 200));
line1.rotate(90);
sf::RectangleShape line2(sf::Vector2f(400, 400));

line2.rotate(90);
sf::RectangleShape line3(sf::Vector2f(600, 400));

line3.rotate(90);

}
Keys_Event Graphic::get_keys()
{
    Keys_Event keys;
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        keys.right = true;
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        keys.left = true;

    return keys;

}
void Graphic::print_score()
{
    sf::Font font;
    sf::Text text;
    text.setFont(font);
    text.setString("Game finished");
    text.setColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold | sf::Text::Underlined);
}

void Graphic::mycar1(int x ,int y)
 {

    mycar_shape.setSize(sf::Vector2f(50, 60));
    mycar_shape.setPosition(x ,y );



 }

void Graphic::prepair()
{
    othercar_shape.clear();
}


 int Graphic::othercar1(int x, int y)
 {
         sf::RectangleShape ne;
    ne.setSize(sf::Vector2f(50, 60));
    ne.setPosition(x,y);
    othercar_shape.push_back(ne);

    return 0;

 }
