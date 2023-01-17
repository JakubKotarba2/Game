#ifndef DINOSAUR
#define DINOSAUR

#include<iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>	
#include "Vbulets.h"
#include "App.h"
class dinosaur
{
public:
	bool isTextureLoaded();//checking if texture is loaded
	void Textures();//chenging textures
	void isSpriteLoaded();//checking if sprite is loadel correctly
	void processEvents(sf::Keyboard::Key key, bool checkPressed);//Processing events
	void update();//Updating sprites
	void colision(sf::Sprite& s);//Colision with others objects
	bool model();//Don't know why I created this


	dinosaur()
	{
		up = false;
		down = false;
		left = false;
		right = false;
	};

public:
	 App a;
	 sf::Sprite sprite;
	 sf::Texture texture;
	 bool up;
	 bool down;
	 bool left;
	 bool right;
private:
};

#endif // !DINOSOUR

