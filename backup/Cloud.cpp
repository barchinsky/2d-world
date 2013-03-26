#include <iostream>

#include "Cloud.hpp"
#include "math.h"
#include <string>

Cloud::Cloud(int index) // init cloud, index - cloud image index
{
    std::string str[] = {"media/clouds/0.png","media/clouds/1.png","media/clouds/2.png","media/clouds/3.png"};
    if (!cloudT.loadFromFile( str[index].c_str() ) ) std::cout << "Cloud(index"<< index << ") download error\n";
    cloudS = sf::Sprite(cloudT);

    cloudX = 1200 + rand()%400;
    cloudY = rand()%250;

    weight = index;
}

sf::Sprite Cloud::getCloud()
{
    return cloudS; // return cloud sprite
}

void Cloud::move(int wind)
{
    cloudX += wind + 0.25*weight;
    cloudS.setPosition(cloudX, cloudY);

    if(cloudX < -600)
    { 
        cloudX = 1300 + rand()%200;
        cloudY = rand()%250;
        cloudS.setPosition( cloudX, cloudY );
    } 
}
