#include "Game.h"

Game::Game()
	: window("ChessPlusPlus", 600u + 256u, 600u),
	  board(window.GetSize().width, window.GetSize().height),
	  menu(window) {

}

bool Game::Run() {
	timer.restart();
	while (window.IsOpen()) {
		Update();
		Draw();
	}
	return true;
}

void Game::Update() {
	float dt = timer.restart().asSeconds();

	menu.Update(dt);

	window.Update();
}

void Game::Draw() {
	window.Begin(sf::Color::Magenta);
	
	menu.Draw(window);

	window.End();
}
