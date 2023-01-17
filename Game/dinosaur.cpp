#include "dinosaur.h"
#include <iostream>


bool dinosaur::isTextureLoaded()
{
	if(!texture.loadFromFile("download.png"));
	return EXIT_FAILURE;
}


void dinosaur::isSpriteLoaded()
{
	this->Textures();
	sprite.setTexture(texture);

}

void dinosaur::Textures()
{
	//sprite.setColor(sf::Color(0, 255, 0)); 
}


void dinosaur::processEvents(sf::Keyboard::Key key, bool checkPressed)
{

	if (checkPressed == true)
	{
		if (key == sf::Keyboard::W)
			up = true;

		if (key == sf::Keyboard::S)
			down = true;

		if (key == sf::Keyboard::A)
			left = true;

		if (key == sf::Keyboard::D)
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



void dinosaur::update()
{
	sf::Vector2f movement;
	if (up)
		movement.y -= 2.0f;
	if (down)
		movement.y += 2.0f;
	if (left)
		movement.x -= 2.0f;
	if (right)
		movement.x += 2.0f;
	sprite.move(movement);
}

void dinosaur::colision(sf::Sprite& s)
{
	if (s.getPosition().x >= 1200)
	{
		s.setPosition(1200, s.getPosition().y);
	}
	if (s.getPosition().x < 0)
	{
		s.setPosition(0, s.getPosition().y);
	}
	if (s.getPosition().y > 600)
	{
		s.setPosition(s.getPosition().x,600);
	}
	/*if (s.getPosition().y < 600)
	{
		s.setPosition(s.getPosition().x, 0.f);
	}*/
}

bool dinosaur::model()
{
	return sprite.getGlobalBounds().intersects(sprite.getGlobalBounds());
}












