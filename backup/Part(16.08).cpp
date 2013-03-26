#include "Part.hpp"

Part::Part()
{
    this->init();
}

void Part::init()
{
    flameT.loadFromFile("media/fire/lightmini.png");
    part = sf::Sprite(flameT);

    timeout = rand()%100;
    r = 240;
    g = 200;
    b = 150;
    rad = 10;
    x = 70 + rand()%100;
    y = 630;

    part.setColor(sf::Color(r,g,b,255));
    part.setPosition(x,y);
}

Part::Part(sf::Vector2f pos)
{
   flameT.loadFromFile("lightmini.png");
    part = sf::Sprite(flameT);

    timeout = rand()%100;
    r = 240;
    g = 200;
    b = 150;
    rad = 10;
    x = pos.x;
    y = pos.y;

    part.setColor(sf::Color(r,g,b,255));
    part.setPosition(x,y);
}

sf::Sprite Part::move(float wind, float gravity, int flame_pow) // change current drop position
{
    int smoke_pow = flame_pow - flame_pow/1.1;

    if( (y < flame_pow) && (y > (flame_pow - smoke_pow) ) ) // draw smoke
    {
        y+=gravity; // change smoke position

        part.setPosition(x, y);
        part.setColor(sf::Color(20,20,20,255)); // set smoke color

        return part;
    }
    
    if( y < (flame_pow - smoke_pow + 20) ) this->init(); // reset part
    
    incColor(); // change color
    
    if(x >= 70 && x <= 120)
      {
        x += wind*0.05;
        y += gravity;
        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,255));
      }
    else 
      {
        x -= wind*0.05;
        y += gravity;
        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,255));
      }

    return part;
}

sf::Vector2f Part::getPosition() // return current y position
{
    return sf::Vector2f(x,y);
}

void Part::setPosition(sf::Vector2f pos)
{
    x = pos.x;
    y = pos.y;
}
    

int Part::getTimeout() // get drop timeout
{
    return timeout;
}

void Part::setTimeout(int _timeout) // set drop timeout
{
    timeout = _timeout;
}

void Part::incColor()
{
    g-= rand()%5;
    b-= rand()%5;
}

sf::Sprite Part::getPart()
{
    return part;
}
