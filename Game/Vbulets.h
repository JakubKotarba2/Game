#ifndef VBULETS
#define VBULETS
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>

class Vbulets
{
private:
	sf::Sprite m_s;
	sf::Texture m_texture;
	virtual void initSprite();
	bool isTextureLoaded();
	void initTexture();
};

#endif // !VBULETS
