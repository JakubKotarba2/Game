#include "Entity.h"

Entity::Entity()
{
}

void Entity::init(float x, float y)
{
	rec.setSize(sf::Vector2f(x, y));
	up = false;
	down = false;
	left = false;
	right = false;
}

void Entity::procesEvents(sf::Keyboard::Key key, bool checkPressed)
{

	if (checkPressed == true)
	{
		if (key == sf::Keyboard::Up)
			up = true;
		if (key == sf::Keyboard::Down)
			down = true;
		if (key == sf::Keyboard::Left)
			left = true;
		if (key == sf::Keyboard::Right)
			right = true;
	}
	if (checkPressed == false)
	{
		up = false;
		down = false;
		left = false;
		right = false;
	}
}

void Entity::upadate()
{
	sf::Vector2f movement;

	if (up)
		movement.y -= 1.0f;
	if (down)
		movement.y += 1.0f;
	if (left)
		movement.x -= 1.0f;
	if (right)
		movement.x += 1.0f;
	rec.move(movement);
}

void Entity::draw(sf::RenderWindow* window)
{
	window->draw(rec);
}
