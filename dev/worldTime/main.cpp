#include <iostream>
#include <time.h>
#include <stdio.h>

int main()
{

    clock_t endwait;
    time_t currentTime;
    time_t pastTime;
    int seconds = 0;

    time(&pastTime);

    for(int i = 0; i < 999999999;++i)
    {}

    time(&currentTime);
    seconds = difftime(currentTime,pastTime);

    std::cout << (float)seconds;

    return 0;


}
