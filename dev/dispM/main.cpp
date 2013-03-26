#include <iostream>
#include <SFML/Graphics.hpp>

#include "DisplayManager.hpp"

int main()
{
//    sf::RenderWindow app2(sf::VideoMode(100,200,64),"test");
    sf::Texture txt;
    txt.loadFromFile("lightmini.png");
    sf::Sprite sprt(txt);

    //DisplayManager disp;
    while(1)
    {
        sf::sleep(sf::seconds(0.01));
    DisplayManager().getWindow().draw(sprt);
    DisplayManager().getWindow().display();
    sprt.move(0.1,0.5);
    DisplayManager().getWindow().clear();
    }
    return 0;
}
