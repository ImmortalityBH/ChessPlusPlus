#pragma once

#include "Window.h"
#include "Board.h"
#include "Piece.h"

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
	sf::Clock timer;
};

