#include "Part.hpp"

Part::Part(sf::Texture& _flameT)
{
    part = sf::Sprite(_flameT);

    timeout = rand()%100;
    r = 180;
    g = 200;
    b = 180;
    a = 100;
    x = 70 + rand()%50;
    y = 630;

    part.setColor(sf::Color(r,g,b,a));
    part.setPosition(x,y);
}

void Part::reset()
{
    timeout = rand()%100;
    r = 180;
    g = 200;
    b = 180;
    a = 100;
    x = 70 + rand()%50;
    y = 630;

    part.setColor(sf::Color(r,g,b,a));
    part.setPosition(x,y);
}

sf::Sprite Part::move(float wind, float gravity, int flame_pow) // change current drop position
{
    float smoke_pow = flame_pow - flame_pow/1.1;

    if( y < flame_pow && y > flame_pow - smoke_pow ) // draw smoke
    {
        y-=gravity; // change smoke position

        part.setPosition(x, y);
        part.setColor(sf::Color(20,20,20,25)); // set smoke color

        return part;
    }
    
    if( y < (flame_pow - smoke_pow + 20) ) this->reset(); // reset part
    
    incColor(); // change color
    int elapse = rand()%300;
    if(elapse < 100)
    {
        x+=3;
        y-=gravity;

        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,a));
    }
    else if( elapse > 100 && elapse < 200)
    {
        x-=3;
        y-=gravity;
        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,a));
    }
    else
    {
        y--;
        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,a));

    }
    
    return part;
}

sf::Vector2f Part::getPosition() // return current y position
{
    return sf::Vector2f(x,y);
}

void Part::setPosition(sf::Vector2f pos)
{
    x += pos.x;
    y += pos.y;
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
    b-= rand()%3;
    //r-=3;
    a -= 5;
}

sf::Sprite Part::getPart()
{
    return part;
}

