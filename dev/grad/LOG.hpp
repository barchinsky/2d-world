#include <fstream>
#include <string>

void LOG(std::string toLog)
{
    std::ofstream log("log.2d");
    log << toLog << '\n';
}

void LOG(int toLog)
{
    std::ofstream log("log.2d");
    log << toLog << '\n';
}

void LOG(float toLog)
{
    std::ofstream log("log.2d");
    log << toLog << '\n';
}

