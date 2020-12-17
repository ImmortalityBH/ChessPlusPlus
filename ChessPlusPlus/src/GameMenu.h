#pragma once

#include "Window.h"

class GameMenu
{
public:
	GameMenu(Window& window);

	void Update(float dt);
	void Draw(Window& window);
private:
	Window& window;
	sf::RectangleShape background;
	
	sf::Text scoreText;
};

