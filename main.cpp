#include <SFML/Graphics.hpp>
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "player.hpp";
#include "Events-Actions-Class.hpp"
#include <iostream>
int main() {

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "test");
	Events move;
	sf::Event e;
	Actions a;

	sf::Vector2f size(50.0, 200.0);
	sf::Vector2f pos(500, 500);
	sf::Color color = sf::Color::Green;

	Player p1(size, pos, color);

	while (window.isOpen()) {

		while (window.pollEvent(e)) {

			if (e.type == sf::Event::Closed) {
				window.close();
			}

		}

		move.movementInput(window, p1);

		int direction = 1;

		/*if (Keyboard::isKeyPressed(Keyboard::A)) {
			direction = -1;
			p1.move(0.3 * direction, 0);
		}
		else if (Keyboard::isKeyPressed(Keyboard::D)) {
			p1.move(0.3 * direction, 0);
		}*/

		a.inBounds(window, p1);


		// clear the window with black color
		window.clear();

		
		
		// draw everything here...
		window.draw(p1);

		

		// end the current frame
		window.display();

	


	}

	/*sf::Texture texture;
	if (!texture.loadFromFile("image.jpg"))
	{
		std::cout << "failed to open" << std::endl;
	}*/

	





	return 0;
}
