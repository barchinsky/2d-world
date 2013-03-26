#ifndef DS_MANAGER
#define DS_MANAGER

#include <SFML/Graphics.hpp>

class DisplayManager
{
    public:
        DisplayManager(){}
        static sf::RenderWindow& getWindow() { return app; }
    private:
        static sf::RenderWindow app;
};

sf::RenderWindow DisplayManager::app(sf::VideoMode(500,500),"Tets");

#endif
