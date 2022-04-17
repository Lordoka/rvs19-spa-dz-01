#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	void draw();
private:
	sf::Time time;
	sf::RenderWindow* window;
	sf::Clock frameClock;
	void flower();
	void stem();
	void leaf();
};