#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "SFML/Graphics.hpp"

class Light
{
    public:
        sf::Sprite getLight();
        int getTimeout();
        void setTimeout(int);
        Light();
        void changeX();
        //int operator--();

    private:
        sf::Sprite lightS;
        sf::Texture lightT;

        float currX;
        float currY;

        int timeout; // density of lightnings
};

#endif /* LIGHT_HPP */
