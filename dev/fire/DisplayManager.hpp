#ifndef DS_MANAGER
#define DS_MANAGER

#include <SFML/Graphics.hpp>

class DisplayManager
{
    public:
        DisplayManager(){}
        DisplayManager(const DisplayManager&){}
        static sf::RenderWindow& getWindow() { return app; }
    private:
        static sf::RenderWindow app;
};

#endif
