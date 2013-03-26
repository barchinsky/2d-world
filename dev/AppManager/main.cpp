#include <iostream>
#include "AppManager.hpp"

int main()
{
    AppManager appManager;

    for(int i = 0; i < 999999999; ++i) {}

    std::cout << appManager.getTimeDiff();

    return 0;
}
