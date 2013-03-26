#ifndef WAIT_H
#define WAIT_H

#include <time.h>

void Wait(double sec)
{
    clock_t endwait;
    endwait = clock() + sec*CLOCKS_PER_SEC;
    while(clock() < endwait) {}
}

#endif // WAIT_H
