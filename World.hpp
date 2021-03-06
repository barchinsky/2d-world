#ifndef WORLD_HPP
#define WORLD_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

// keep world setup

class World
{
    public:
        World();
        bool getRain();
        bool getWind();
        int getWindPower();
        int getRainPower();
        float getGravity();
        int getCloudnes();
        int getLeaves();
        int getFlamePow();

        double getTimeDiff();

    private:
        int rpower;
        bool rain;
        bool wind;
        int wpower; // wind power
        float gravity;
        int cloud;
        int leaves;
        int fpower; // flame power

        time_t currentTime;
        time_t lastTime;
};

#endif /* World.hpp */
