#ifndef PART_HPP
#define PART_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>

#include "World.hpp"

class Part
{
    public:
    void reset();
    sf::Sprite move(float, float, int); // set wind,gravity and flame power parameters
    sf::Sprite moveINmove(float,float); //move fire on another moving object
    sf::Vector2f getPosition(); // get current y position
    void setPosition(sf::Vector2f);
    int getTimeout();
    void setTimeout(int);
    sf::Sprite getPart();
    Part(sf::Texture&);

    private:
    sf::Sprite part;
    int timeout;
    int rad; // circle radius
    int x;
    int y;
    int r,g,b,a;
    World mw;

    void incColor();
};

#endif /* Part.hpp */
