#ifndef APP_MANAGER_HPP
#define APP_MANAGER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "time.h"

class AppManager
{
    public:
        AppManager();
        double getTimeDiff();
        

    private:
        time_t currentTime;
        time_t lastTime;
};

#endif /* AppManager */
