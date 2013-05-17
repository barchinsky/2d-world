#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "DisplayManager.hpp"

struct BirdsData
{
    sf::Texture birdTexture;
    sf::Sprite birdSprite;
};

class Bird
{
    public:
        Bird();
        void update();

    private:
        std::vector<BirdsData> birds;
        int timeout;
        int textureIndex;
        int x;
};

