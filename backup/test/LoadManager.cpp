#include "LoadManager.hpp"

LoadManager::LoadManager()
{
    this->Init();
}

void LoadManager::Init()
{
    for(int i = 0; i < 4; ++i)
    {
        clouds[i] = Cloud(i);
    }
    
    if (!foreground.loadFromFile("media/foreground.png") & !background.loadFromFile("media/background.jpg") ) // download textures
        std::cout << "Foreground load error!\n";
    
    fgS = sf::Sprite(foreground); // set sprites
    bgS = sf::Sprite(background);

    if( !thunderSound.openFromFile("media/music/thunder.ogg") )  std::cout << "Thunder load error\n"; // load thunder sound

    if( !rainSound.openFromFile("media/music/rain.ogg") ) std::cout << "Rain load error\n";
}

Cloud* LoadManager::getCloud()
{
    return clouds;
}

sf::Sprite LoadManager::getFgS()
{
    return fgS;
}

sf::Sprite LoadManager::getBgS()
{
    return bgS;
}

sf::Music LoadManager::getThunder()
{
    return thunderSound;
}

sf::Music LoadManager::getRain()
{
    return rainSound;
}
