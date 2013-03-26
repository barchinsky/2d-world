#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#include "Cloud.hpp"

class LoadManager
{
    public:
        LoadManager();
        void Init();
        Cloud* getCloud();
        sf::Sprite getFgS(); // foreground sprite
        sf::Sprite getBgS(); // background sprite
        
        sf::Music getThunder(); // get thunder sound
        sf::Music getRain(); // get rain music

    private:
        Cloud *clouds;
        sf::Texture foreground, background;
        sf::Sprite fgS, bgS;

        sf::Music thunderSound, rainSound;
};
