#ifndef APP_HPP_INCLUDED
#define APP_HPP_INCLUDED
#include<iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>	
#include <map>

using namespace std;
using namespace sf;

class App	
{
private:
public:
	int WIDTH = 1600; //width of window
	int HEIGHT = 1000; //height of window

	//main window
	RenderWindow* window;
	//Pulling events
	Event e{};
	App();// Constructor
	bool isClosedEvent();// checking if key is escape or x
	void update();// Updating window
	~App();//Destruckor deleting window
	void initVariables();//Initializating windows
	bool isKeyPressedEvent();//testing if keybordkey is pressed
	bool isKeyReleased();//checking if key is released
};

#endif // APP
