#ifndef MOON_HPP
#define MOON_HPP

#include <SFML/Graphics.hpp>

class Moon
{
    public:
    Moon();
    void move();
    sf::Sprite getMoon();

    private:
    sf::Texture moonT;
    sf::Sprite moon; 

    float currX;
    float currY;
    float h; //height over the ground
};

#endif /* Moon.hpp */
