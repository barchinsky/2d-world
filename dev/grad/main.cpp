#include "ColorScale.hpp"
#include "Sky.hpp"
#include "DisplayManager.hpp"

int main()
{
 
	/*const int SIZE = 500;
	ColorScale gradient;
//	gradient.insert(0.0,sf::Color::Red);
	gradient.insert(2.0,sf::Color(150,0,100));
	gradient.insert(1.0,sf::Color(0,0,255,70));
//	gradient.insert(3.0,sf::Color::Cyan);
//	gradient.insert(4.0,sf::Color::Green);
//	gradient.insert(5.0,sf::Color::Yellow);
//	gradient.insert(6.0,sf::Color::Red);
 
 
	sf::Color* tab =new sf::Color[SIZE];
	gradient.fillTab(tab,SIZE);
 

    Sky sky(800);
*/
	/*sf::RenderWindow DisplayManager().getWindow()(sf::VideoMode(800, 800, 32), "Gradient");
	DisplayManager().getWindow().setFramerateLimit(30);
 
	sf::Image image;
    image.create(SIZE,SIZE);
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			image.setPixel(i,j,tab[j]);
		}		
	}
    
    sf::Texture texture;
    texture.loadFromImage(image);
	sf::Sprite sprite(texture);
 */

    Sky sky(1000);
	while(DisplayManager().getWindow().isOpen())
	{
        sf::sleep(sf::seconds(1));
		sf::Event Event;
		while (DisplayManager().getWindow().pollEvent(Event)) 
		{
if (Event.type==sf::Event::Closed)
			{
				DisplayManager().getWindow().close();
			} 
		}
 
		DisplayManager().getWindow().clear();
        sky.update();
		DisplayManager().getWindow().display();
	}

	return 0;
}
