#include "Bird.hpp"

Bird::Bird()
{
    std::string path[] = {"birds/0.png","birds/1.png","birds/2.png","birds/3.png","birds/4.png","birds/5.png","birds/6.png","birds/7.png","birds/8.png","birds/9.png"};

    for(int i = 0; i < 10; ++i)
    {
        birdT.loadFromFile(path[i]);
        birdTetxures.push_back( sf::Sprite(birdT) );
    }
}

void Bird::update()
{
    DisplayManager().getWindow().draw( birdTetxures[1] );
}
