#include "Fire.hpp"

Fire::Fire(sf::Texture& _flameT)
{
    flameT = _flameT;

    for(int i = 0; i < 800; ++i)// set coordinates of the drop
    {
         fire.push_back( Part(flameT) );
    }

}

void Fire::update()
{

        for(int i = 0; i < 500; ++i)
        {
                if(!fire[i].getTimeout() ) // if drop timeout is 0
                {
                    DisplayManager().getWindow().draw( fire[i].move( 2 , 1, 580) ); //  move and drow the drop
                }
                else // change drop timeout
                {
                    fire[i].setTimeout(fire[i].getTimeout() - 1); // decrease timeout
                    continue;
                }
        }
}
