#include "Bug.hpp"

Bug::Bug(sf::Texture& bugT)
{
    x = 1000;
    y = 400;
    distance = 0;
    bug = sf::Sprite(bugT);
    bug.setPosition(x,y);
}

sf::Sprite Bug::getBug()
{
    this->move();
    return bug;
}

void Bug::move()
{
    int direct = rand()%100000;
    if( direct < 2500 )
    {
        x += 2;
        y += 2;
        rad += 1;
        bug.setPosition(x,y);
    }
    else if(direct > 2500 & direct < 7000)
    {
        x -= 3;
        y -= 3;
        rad -= 1;
        bug.setPosition(x,y);
    }
    else if(direct > 7000 & direct < 75000)
    {
        x -= 1;
        y += 1;
        bug.setPosition(x,y);
    }
    else if(direct > 75000 & direct < 100000)
    {
        x += 2;
        y -= 2;
        bug.setPosition(x, y);
    }
}

void Bug::incDis(int step)
{
    this->distance += step;
}
