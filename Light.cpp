#include "Light.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

Light::Light()
{
    srand(time(NULL));
    lightT.loadFromFile("media/lights/0.png");
    lightS = sf::Sprite( lightT );

    currX = rand()%1200;
    currY = 0;

    timeout = 90;
}

sf::Sprite Light::getLight()
{
    return lightS;
}

int Light::getTimeout()
{
    return timeout;
}

void Light::setTimeout(int n_time)
{
    timeout = n_time;
}

void Light::changeX()
{
    currX = rand()%1200;
    lightS.setPosition(currX, 0);
}
