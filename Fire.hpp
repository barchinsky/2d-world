#include <SFML/Graphics.hpp>
#include <vector>

#include "DisplayManager.hpp"
#include "Part.hpp"
#include "World.hpp"

class Fire
{
    public:
        Fire(sf::Texture&);
        void update();

    private:
        std::vector<Part> fire;
        sf::Texture flameT;
};
