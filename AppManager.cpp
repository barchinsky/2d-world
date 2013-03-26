#include "AppManager.hpp"

AppManager::AppManager()
{
    time(&lastTime);
}

double AppManager::getTimeDiff()
{
    time(&currentTime);
    return difftime(currentTime,lastTime);
}
