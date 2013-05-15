#include "Moon.hpp"
#include "math.h"

Moon::Moon() // init moon
{
    moonT.loadFromFile("media/moon/moon.png");
    moonT.setSmooth(1);
    moon = sf::Sprite(moonT);

    currX = -200.;
    h = 0.8;
}

sf::Sprite Moon::getMoon() // return moon-object
{
    return moon; // return Moon sprite
}

void Moon::update() // move moon
{
    currX += 0.3; // change current x-position
    currY = 0.0005*currX*currX - h*currX + 400; // set moon trajectory
    
    if(currX > 1400) { currX = -350;} // reset moon posotion

    moon.setPosition(currX,currY);

    DisplayManager().getWindow().draw(moon);
}
