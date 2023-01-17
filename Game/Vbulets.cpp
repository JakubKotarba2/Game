#include "Vbulets.h"

void Vbulets::initSprite()
{
	m_s.setTexture(m_texture);
}

void Vbulets::initTexture()
{
	
}

bool Vbulets::isTextureLoaded()
{
	if (!m_texture.loadFromFile("bullets.png"))
		return	EXIT_FAILURE;
}
