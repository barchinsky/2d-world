#ifndef LEAVES_HPP
#define LEAVES_HPP

#include <SFML/Graphics.hpp>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Leave
{
    public:
        Leave();
        Leave(int);
        void Init(int);
        sf::Sprite getLeave() { return leaveS;}
        void move(int, int);
        void reset();

    private:
        sf::Texture leaveT;
        sf::Sprite leaveS;

        float currX;
        float currY;

        float rotY; // rotation factor
        bool rotSwitch;

        int weight;
};

#endif /* Leaves.hpp */
