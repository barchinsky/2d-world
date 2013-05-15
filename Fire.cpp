#include "Fire.hpp"

Fire::Fire(sf::Texture& _flameT)
{
    flameT = _flameT;

    for(int i = 0; i < 200; ++i)
    {
         fire.push_back( Part(flameT) );
    }
}

void Fire::update()
{
    World mw;

    const int windPower = mw.getWindPower();
    const int gravity = mw.getGravity();
    const int flamePow = mw.getFlamePow();

        for(int i = 0; i < 200; ++i)
        {
                if(!fire[i].getTimeout() ) // if drop timeout is 0
                {
                    DisplayManager().getWindow().draw( fire[i].move( windPower , gravity, flamePow) ); //  move and drow the drop
                }
                else // change drop timeout
                {
                    fire[i].setTimeout( fire[i].getTimeout()-1 ); // decrease timeout
                    continue;
                }
        }
}
