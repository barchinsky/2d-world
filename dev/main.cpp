#include <SFML/Graphics.hpp>
#include <vector>

#include "Moon.hpp"
#include "Part.hpp"

using namespace std;

int main()
{
    sf::RenderWindow App(sf::VideoMode(1000,800,64),"Rain_dev");
    sf::Texture flameT;

    sf::Texture backT;
    sf::Texture foreT;
    sf::Texture sunT;


    sunT.loadFromFile("sunShine.png");

    sf::Sprite sunShine(sunT);

    sunShine.setColor(sf::Color(255,36,0,170));
    sunShine.setPosition(-1750,50);

    foreT.loadFromFile("foreground.png");
    flameT.loadFromFile("fire/lightmini.png");
    backT.loadFromFile("background.png");

    sf::Sprite back(backT);
    sf::Sprite fore(foreT);

    int r=0,g=0,b=169;
    back.setColor(sf::Color(0,0,169,70));
    Moon moon;

    vector<Part> fire; // fire part array
    for(int i = 0; i < 800; ++i)// set coordinates of the drop
    {
         fire.push_back( Part(flameT) );
    }


    while( App.isOpen() ) // while application is working
    {  
    sf::sleep(sf::seconds(0.01));

    App.draw(back);
        App.draw(moon.getMoon());
        App.draw(sunShine);
        sunShine.move(0.1,0);
        moon.move();
App.draw(fore);
/*for(int i = 0; i < 500; ++i)
        {
                if(!fire[i].getTimeout() ) // if drop timeout is 0
                {
                    App.draw( fire[i].move( 2 , 7, 550) ); //  move and drow the drop
                }
                else // change drop timeout
                {
                    fire[i].setTimeout(fire[i].getTimeout() - 1); // decrease timeout
                    continue;
                }
        }*/
            App.display();
            App.clear();
 

    }


    return 0;
}
