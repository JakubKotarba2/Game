#include <iostream>
#include <iterator>
#include <list>
#include <ccomplex>
#include <vector>
#include <thread>
#include <functional>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Entity.h"
#include "App.h"
#include "dinosaur.h"
using namespace std;
using namespace sf;




int main()
{
	App app;
	dinosaur dino;
	Entity player;
	//player.init(player.e.window->getSize().x / 10, player.e.window->getSize().y / 10);
				
				/*std::thread t(&dinosaur::processEvents, &dino, app.e.key.code, true);
				std::thread l(&Entity::procesEvents, &player, app.e.key.code, true);
				l.join();
				t.join();

				std::thread t(&dinosaur::processEvents, &dino, app.e.key.code, false);
				std::thread l(&Entity::procesEvents, &player, app.e.key.code, false);
				l.join();
				t.join();*/

	while (app.window->isOpen())
	{
		while (app.window->pollEvent(app.e))
		{
			if (app.isClosedEvent())
			{
				app.window->close();
				break;
			}
			if (dino.a.isKeyPressedEvent());
			{
				dino.processEvents(app.e.key.code, true);
			}
			if (dino.a.isKeyReleased())
			{
				dino.processEvents(app.e.key.code, false);
			}
		}
		app.update();
		dino.isTextureLoaded();
		dino.isSpriteLoaded();
		dino.model();
		dino.update();
		dino.colision(dino.sprite);
		app.window->draw(player.rec);
		app.window->draw(dino.sprite);
		app.window->display();
	}

	return 0;
}
