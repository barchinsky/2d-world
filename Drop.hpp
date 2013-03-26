#ifndef DROP_HPP
#define DROP_HPP

#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>

class Drop
{
    public:
    void Init(); // set start and end coordinates of line automaticaly
    sf::CircleShape move(float, float); // set wind and gravity parameters
    float getPosition() { return y; } // get current y position
    int getTimeout() { return timeout; }
    void setTimeout(int _timeout) { timeout = _timeout; };
    Drop();

    private:
    sf::CircleShape drop;
    int timeout;
    int rad; // circle radius
    int x;
    int y;
};

#endif /* Drop.hpp */
