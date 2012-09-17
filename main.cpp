#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "Drop.hpp"
#include "Moon.hpp"
#include "Bug.hpp"
#include "Wait.h"
#include "Light.hpp"
#include "World.hpp"
#include "Cloud.hpp"
#include "Leave.hpp"
#include "Part.hpp"

using namespace std;

int main()
{
    srand(time(NULL));

    sf::RenderWindow App(sf::VideoMode(1000,800,64), "Rain");
    
   sf::Font font;
 font.loadFromFile("fonts/arial.ttf");

 sf::Text text("Loading...",font,30);
 // Create a text
    text.setPosition(500,400);
    
    App.draw(text);
    App.display();

    App.setVerticalSyncEnabled(1);

    sf::Texture fgT; // foreground texture
    sf::Texture bgT; // background texture
    sf::Texture fpT;
    sf::Texture nebulaT;
    sf::Texture birdT;
    sf::Texture flameT;
    sf::Texture bugT;

    //load textures
    fgT.loadFromFile("media/foreground.png");
    bgT.loadFromFile("media/background.png");
    fpT.loadFromFile("media/fire/fireplace.png");
    nebulaT.loadFromFile("media/nebulas/big_galaxy.png");
    flameT.loadFromFile("media/fire/lightmini.png");
    bugT.loadFromFile("media/bug.png");
    
    nebulaT.setSmooth(1);

    sf::Sprite foreground(fgT); // set sprites
    sf::Sprite background(bgT);
    sf::Sprite fireplace(fpT);
    sf::Sprite nebula(nebulaT);

    fireplace.setPosition(100,610);
    nebula.setPosition(200, 0);


    sf::Music thunderSound;
    if( !thunderSound.openFromFile("media/music/thunder.ogg") ) return EXIT_FAILURE; // load thunder sound

    sf::Music rainSound; // load rain sound
    if( !rainSound.openFromFile("media/music/rain.ogg") ) return EXIT_FAILURE;

    sf::Music animalSound; // load nature sound
    if( !animalSound.openFromFile("media/music/animal.ogg") ) return EXIT_FAILURE;

    sf::Music windSound;
    windSound.openFromFile("media/music/wind.wav");
    windSound.setLoop(1);

    animalSound.play();
    windSound.play();
    
    rainSound.setVolume(0.f); // set rain volume
    rainSound.setLoop(1);

    thunderSound.setVolume(0.f);
    animalSound.setVolume(0.f);
    windSound.setVolume(0.f);

    vector<Drop> drops; // drop array 
    vector<Part> fire; // fire part array
    for(int i = 0; i < 800; ++i)// set coordinates of the drop
    {
         drops.push_back( Drop() );
         fire.push_back( Part(flameT) );
    }

    Leave leaves[] = { Leave(0) ,Leave(1), Leave(2), Leave(3), Leave(4), Leave(5), Leave(6) }; // init leave array; 

    Cloud clouds[] = { Cloud(0) ,Cloud(1), Cloud(2), Cloud(3) }; // init cloud array

    Moon moon; // init moon
    Bug bug(bugT); // init bug
    Light light; // init light

    App.clear();

    while( App.isOpen() ) // while application is working
    {    
        World mw; // my world settings
        
        sf::sleep(sf::seconds(0.009)); // offload CPU cycles

        sf::Event event; // make event hendler
    
        while(App.pollEvent(event)) // try if user don't close the window
        {
            if(event.type == sf::Event::Closed) { App.close(); } // close window
            
            if( event.type == sf::Event::KeyPressed )
            {
                if( event.key.code == sf::Keyboard::Escape ) { App.close(); }
            }
        }
        
        App.draw( background ); // draw background
        App.draw(nebula);
        nebula.rotate(-0.01);
        
        App.draw( moon.getMoon() ); //draw the moon
        moon.move(); // move moon
        
        for(int i = 0; i < mw.getCloudnes(); ++i) //draw clouds
        {
            App.draw( clouds[i].getCloud() ); // draw cloud 
            clouds[i].move( mw.getWindPower() ); // move cloud
        } 

        App.draw( foreground ); // draw foreground  
        App.draw( fireplace );


        for(int i = 0; i < 500; ++i)
        {
                if(!fire[i].getTimeout() ) // if drop timeout is 0
                {
                    App.draw( fire[i].move( mw.getWindPower() , -1.5, mw.getFlamePow()) ); //  move and drow the drop
                }
                else // change drop timeout
                {
                    fire[i].setTimeout(fire[i].getTimeout() - 1); // decrease timeout
                    continue;
                }
        }

        // rain displaying
        if( mw.getRain() ) // check if raining
        {
            animalSound.stop();
            // light dislplaying
            if(light.getTimeout() < 15) // check light timeout, and draw it
            {
                App.draw( light.getLight() ); // draw light
                thunderSound.play();
                rainSound.play();

            }

            if(light.getTimeout() == 0) // check light timeout, reset timeout and move light
            {
                light.setTimeout(800);
                light.changeX(); // chage current position
            }
            else
            {
                light.setTimeout( light.getTimeout() - 1 ); // decrease timeout
            }

            // rain drawing
            for(int i = 0; i < mw.getRainPower(); ++i) // drowing the drop
            {
                if(!drops[i].getTimeout() ) // if drop timeout is 0
                {
                     App.draw( drops[i].move( mw.getWindPower(), mw.getGravity() ) ); //  move and drow the drop
                }
                else // change drop timeout
                {
                    drops[i].setTimeout(drops[i].getTimeout() - 1); // decrease timeout
                    continue;
                }
            
                if( 800 == drops[i].getPosition() ) // if drop is out of the window - reset it
                {
                    drops[i].Init();
                }
            }
        }
        else // draw bug if it is not raining
        {
            rainSound.stop();
            App.draw( bug.getBug() );
        }

        for( int i = 0; i < mw.getLeaves(); ++i )
        {
            App.draw( leaves[i].getLeave() );
            leaves[i].move(mw.getWindPower(), mw.getGravity());
        }
        
            App.display();
            App.clear();
   }

    return EXIT_FAILURE;
}
