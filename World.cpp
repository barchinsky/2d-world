#include "World.hpp"

World::World()
{
    std::ifstream is; // file keeps settings
    is.open("setup");

    if( !is.is_open() ) // if file not opened
    {
         std::cout << "World constructor.\n";

         std::cout << "Setup file open error!\n";
    }
    else // if file opened
    {
        std::vector <std::string> param; // keep parameters
        std::string buf;
     
        while( !is.eof() ) // read file
        {
            getline(is, buf);
            param.push_back(buf); // write data
        }
    
        rain = atof( param[0].c_str() ); // get rain(bool)
        wind = atof( param[1].c_str() ); // get wind(bool)
        wpower = atof( param[2].c_str() ); // get wind power
        rpower = atof( param[3].c_str() ); // get rain power
        gravity = atof( param[4].c_str() ); // get gravity
        cloud = atof( param[5].c_str() ); // get cloudnes
        leaves = atof( param[6].c_str() ); // get leaves
        fpower = atof( param[7].c_str() );
    }
}

bool World::getRain()
{
    return rain;
}

bool World::getWind()
{
    return wind;
}

int World::getWindPower()
{
    return wpower;
}

int World::getRainPower()
{
    return rpower;
}

float World::getGravity()
{
    return gravity;
}

int World::getCloudnes()
{
    return cloud;
}

int World::getLeaves()
{
    return leaves;
}

int World::getFlamePow()
{
    return fpower;
}
