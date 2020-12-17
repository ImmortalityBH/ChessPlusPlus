#pragma once

#include "Window.h"
#include "Board.h"
#include "GameMenu.h"

class Game {
public:
	Game();
	bool Run();
private:
	void Update();
	void Draw();
private:
	Window window;
	Board board;
	GameMenu menu;
	sf::Clock timer;
};

