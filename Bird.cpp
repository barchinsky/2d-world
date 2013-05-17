#include "Bird.hpp"

Bird::Bird()
{
    timeout = 3;
    int textureIndex = 2;

    x=900;

    for(int i = 0; i < 10; ++i)
    {
        birds.push_back(BirdsData());
    }

}

void Bird::update()
{
    const std::string path[] = {"media/birds/0.png","media/birds/1.png","media/birds/2.png","media/birds/3.png","media/birds/4.png","media/birds/5.png","media/birds/6.png","media/birds/7.png","media/birds/8.png","media/birds/9.png"};

    for(int i = 0; i < 9; ++i)
    {
        birds[i].birdTexture.loadFromFile( path[i] );
        birds[i].birdSprite.setTexture(birds[i].birdTexture);
        birds[i].birdSprite.setScale(0.5,0.5);
    }

    if(textureIndex > 8) textureIndex = 0;
    if(x < 0) x = 1000 + rand()%100;

    if(timeout == 0)
    {
        birds[textureIndex].birdSprite.setPosition(x-=3,200);
        DisplayManager().getWindow().draw( birds[textureIndex].birdSprite );
        textureIndex++;
        timeout = 3;
    }
    else
    {
        birds[textureIndex].birdSprite.setPosition(x-=3,200);
        DisplayManager().getWindow().draw( birds[textureIndex].birdSprite );

        --timeout;
    }
}
