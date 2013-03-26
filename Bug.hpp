#ifndef BUG_HPP
#define BUG_HPP

#include <SFML/Graphics.hpp>

class Bug
{
    public:
    Bug(sf::Texture&);
    void move();
    sf::Sprite getBug();
    int getDistance() { return distance;}
    void incDis(int); // inc the distance of linear bug moving

    private:
    float x;
    float y;
    int rad;
    int distance;
    sf::Sprite bug;
};

#endif // bug.hpp
