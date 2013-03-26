#include "Leave.hpp"

Leave::Leave() {}

Leave::Leave(int textureIndex)
{
    this->Init( textureIndex );
}

void Leave::Init(int textureIndex)
{
    std::string path[] = { "media/leaves/0.png", "media/leaves/1.png","media/leaves/2.png","media/leaves/3.png","media/leaves/4.png","media/leaves/5.png","media/leaves/6.png" };
    
    if( !leaveT.loadFromFile( path[ textureIndex ] ) ) std::cout<<"Leave load error\n"; // load textures
    leaveT.setSmooth(1);
    leaveS = sf::Sprite(leaveT);

    currX = rand()%1200; // set start coordinates
    currY = 500;

    rotY = 1;
    rotSwitch = rand()%2;

    weight = rand()%4;
}

void Leave::move(int wind, int gravity)
{

    currX += 3*wind + 0.5*weight;
    currY += (-0.01*gravity + 0.1*weight);
    
    if( rotSwitch )
    {
        rotY -=  rand()&5/100;
        if(rotY < -1) rotSwitch = 0;
    }
    else if( !rotSwitch )
    {
        rotY += 0.05;
        if( rotY > 1 ) rotSwitch = 1;
    }

    leaveS.setScale(0.5, rotY);
    leaveS.setPosition(currX, currY);
    leaveS.rotate( rand()%2 );

    if( currY > 900 || currX < 0 )
    {
        this->reset();
    }
}

void Leave::reset()
{
    currX = 1200 + rand()%200;
    currY = rand()%200;
    rotSwitch = rand()%2;
    weight = rand()%4;
         
    leaveS.setPosition(currX, currY);
}
