#include "Leave.hpp"

Leave::Leave()
{
    this->Init();
}

void Leave::Init()
{
    if( !leaveT.loadFromFile("media/leaves/0.png") ) std::cout<<"Leave load error\n";
    leaveS = sf::Sprite(leaveT);

    currX = rand()%1500; // set start coordinates
    currY = -50;
}

void Leave::move(int wind, int gravity)
{
    currX -= 2;
    currY += 0.3*gravity;

    leaveS.setPosition(currX, currY);

    if( currY > 900 )
    {
        currX = rand()%1500;
        currY = -50;
        leaveS.setPosition(currX, currY);
    }
}

sf::Sprite Leave::getLeave()
{
    return leaveS;
}
