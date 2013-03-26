#include "Part.hpp"

Part::Part(sf::Texture& _flameT)
{
    part = sf::Sprite(_flameT);

    timeout = rand()%100;
    r = 240;
    g = 200;
    b = 150;
    x = 70 + rand()%50;
    y = 630;

    part.setColor(sf::Color(r,g,b,255));
    part.setPosition(x,y);
}

void Part::reset()
{
    timeout = rand()%100;
    r = 240;
    g = 200;
    b = 150;
    x = 70 + rand()%50;
    y = 630;

    part.setColor(sf::Color(r,g,b,100));
    part.setPosition(x,y);
}

sf::Sprite Part::move(float wind, float gravity, int flame_pow) // change current drop position
{
    float smoke_pow = flame_pow - flame_pow/1.1;

    if( y < flame_pow && y > flame_pow - smoke_pow ) // draw smoke
    {
        y-=gravity; // change smoke position

        part.setPosition(x, y);
        part.setColor(sf::Color(20,20,20,255)); // set smoke color

        return part;
    }
    
    if( y < (flame_pow - smoke_pow + 20) ) this->reset(); // reset part
    
    incColor(); // change color
    int elapse = rand()%300;
    if(elapse < 100)
    {
        x+=5;
        y-=gravity;

        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,255));
    }
    else if( elapse > 100 && elapse < 200)
    {
        x-=5;
        y-=gravity;
        part.setPosition(x, y);
        part.setColor(sf::Color(r,g,b,255));
    }
    else
    {
        y--;
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
    g-= rand()%10;
    b-= rand()%5;
    //r-=3;
}

sf::Sprite Part::getPart()
{
    return part;
}
