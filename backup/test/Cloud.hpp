#ifndef CLOUD_HPP
#define CLOUD_HPP

#include <SFML/Graphics.hpp>

class Cloud
{
    public:
    Cloud(int);
    void move(int wind); // parametr wind needs to move clouds
    sf::Sprite getCloud();
    int getWeight(); // get cloud weight
    
    private:
    sf::Texture cloudT; // cloud texture
    
    sf::Sprite cloudS;


    //cloud parameters
    float cloudX;
    float cloudY;
    int weight;
};

#endif /* Cloud.hpp */
