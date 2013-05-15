#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "DisplayManager.hpp"

class Bird
{
    public:
        Bird();
        void update();

    private:
        std::vector<sf::Sprite> birdTetxures;
        int x,y;
        sf::Texture birdT;
        sf::Sprite birdSprt;
};
