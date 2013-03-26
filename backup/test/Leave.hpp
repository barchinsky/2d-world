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
        void Init();
        sf::Sprite getLeave();
        void move(int, int);

    private:
        sf::Texture leaveT;
        sf::Sprite leaveS;

        float currX;
        float currY;
};

#endif /* Leaves.hpp */
