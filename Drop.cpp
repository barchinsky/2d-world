#include "Drop.hpp"

Drop::Drop()
{
    this->Init();
}

/*оптимизировать конструктор, возможно вызов одного конструктора для всех обьектов*/

void Drop::Init()
{
    timeout = rand()%900;
    rad = 1;
    x = rand()%1500;
    y = 0;

    drop = sf::CircleShape(rad,10);
    drop.setPosition(x,y);
}

sf::CircleShape Drop::move(float wind, float gravity) // change current drop position
{
    x += wind;
    y += fabs(gravity)*20;
    drop.setPosition(x, y);
    return drop;
}
