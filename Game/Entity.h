#ifndef ENTITY
#define ENTITY
#include "App.h"
#include <iostream>
#include <SFML/Graphics.hpp>

class Entity
{
public:
	App e;
	Entity();
	void init(float x, float y);

	
	void procesEvents(sf::Keyboard::Key key, bool checkPressed);
	void upadate();
	void draw(sf::RenderWindow* window);


public:
	sf::RectangleShape rec;
	bool up;
	bool down;
	bool left;
	bool right;
};

#endif // !ENTITY
