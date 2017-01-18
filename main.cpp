#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

int main()
{
	sf::RenderWindow app(sf::VideoMode(1366, 683), "Inglorious Bastards - The Game");
	sf::Texture texture;
    	if (!texture.loadFromFile("images/background.jpg"))
        	return EXIT_FAILURE;
    	sf::Sprite sprite(texture);

	//Font positioning
	sf::Font font;
    	if (!font.loadFromFile("fonts/8bit.TTF"))
        	return EXIT_FAILURE;

    	//Font positioning
    	sf::Text text("INGLORIOUS BASTARDS",font,60);
    	text.setColor(sf::Color::Red);
    	//text.setCharacterSize(60);
    	text.setPosition(180,100);

    	while (app.isOpen())
    	{
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();
        }

        app.clear();
        app.draw(sprite);
        app.draw(text);
	app.display();
    }

    return 0;
}
