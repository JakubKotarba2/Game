#include "App.h"


App::App()
{
	this->initVariables();
	this->window = new RenderWindow(VideoMode(WIDTH,HEIGHT), "tak");
	
}

bool App::isClosedEvent()
{
	return (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape)));
}

void App::update()
{
	this->window->clear(sf::Color(0,0,0));
}

App::~App()
{
	delete this->window;
}

void App::initVariables()
{
	this->window = nullptr;
}

bool App::isKeyPressedEvent()
{
	return (e.type == Event::KeyPressed);
}

bool App::isKeyReleased()
{
	return (e.type == Event::KeyReleased);
}


