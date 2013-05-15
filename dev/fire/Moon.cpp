#include <iostream>
#include "Moon.hpp"
#include "math.h"

Moon::Moon() // init moon
{
    moonT.loadFromFile("moon.png");
    moonT.setSmooth(1);
    moon = sf::Sprite(moonT);

    currX = -200.;
    currY = 50;
    h = 0.8;
}

sf::Sprite Moon::getMoon() // return moon-object
{
    return moon; // return Moon sprite
}

void Moon::move() // move moon
{
    currX += 0.1; // change current x-position
    //currY = 100*currX*currX + h*currX + 50; // set moon trajectory
    currY += 0.05;
    if(currX > 1400) { currX = -350;} // reset moon posotion

    if(currY > 350)
    {
        //std::cout << "Signal\n";
    }

    moon.setPosition(currX,currY);
}
