#include "Sky.hpp"
#include "LOG.hpp"

Sky::Sky(int _size)
{
    size = _size;
    Init();
}

void Sky::Init()
{
    mColUp.set(0,0,0,100);
    mColDown.set(0,0,100,150);
    tab = new sf::Color[size];
}

Sky::~Sky()
{
    delete[] tab;
}

void Sky::update()
{
    if( (appManager.getTimeDiff() > 10) && (appManager.getTimeDiff() < 200) )
    {
        mColUp.set(mColUp.r,mColUp.g+0.5,mColUp.b+3,mColUp.a);
        mColDown.set(mColDown.r+2,mColDown.g+1.5,mColDown.b,mColDown.a);
        //LOG(mColDown.b);
    }
    if(mColDown.g > 100) mColDown.g = 100;
    if(mColDown.r > 250) mColDown.r = 250;
    if(mColUp.b > 180) mColUp.b = 180;
    
    insertGrad();
    DisplayManager().getWindow().draw(sprite);
}

void Sky::insertGrad()
{
    ColorScale gradient;
    gradient.insert(0.0,sf::Color(mColUp.r,mColUp.g,mColUp.b,mColUp.a));
    gradient.insert(1.0,sf::Color(mColDown.r,mColDown.g,mColDown.b,mColDown.a));

    //LOG(mColUp.r);

    gradient.fillTab(tab,size);

    sf::Image img;
    img.create(size,size);

    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size; ++j)
        {
            img.setPixel(i,j,this->tab[j]);
        }
    }

    texture.loadFromImage(img);
    sprite.setTexture(texture);

}
