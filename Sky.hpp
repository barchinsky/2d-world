#ifndef SKY_HPP
#define SKY_HPP

#include <SFML/Graphics.hpp>
#include <fstream>
#include "ColorScale.hpp"
#include "DisplayManager.hpp"
#include "M_Color.hpp"
#include "AppManager.hpp"

class Sky
{
    private:
        sf::Texture texture;
        sf::Sprite sprite;
        int size;
        M_Color mColUp;
        M_Color mColDown;
        //ColorScale gradient;
        sf::Color* tab;
        AppManager appManager;
        int sleeptime;

    public:
        Sky(int _size);
        ~Sky();
        void update(); // change gradient according to time
        sf::Sprite getSprite(){ return sprite; }
    
    private:
        void Init();
        void insertGrad();
};

#endif /* SKY_HPP */
