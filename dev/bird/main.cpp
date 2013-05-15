#include <SFML/Graphics.hpp>
#include <vector>

#include "DisplayManager.hpp"
#include "Bird.hpp"

using namespace std;

int main()
{
   
        sf::Texture txt;
        sf::Texture back;

        txt.loadFromFile("birds/0.png");
        back.loadFromFile("background.png");

        sf::Sprite backsprt(back);
        sf::Sprite sprt(txt);
        sprt.setScale(0.5,0.4);

        Bird bird;

    while( DisplayManager().getWindow().isOpen() ) // while DisplayManager().getWindow().lication is working
    {  
        DisplayManager().getWindow().draw(backsprt);

//        DisplayManager().getWindow().draw(sprt);

       bird.update();

        sf::sleep(sf::seconds(1));
    
        DisplayManager().getWindow().display();
        DisplayManager().getWindow().clear(); 

    }

    return 0;
}
