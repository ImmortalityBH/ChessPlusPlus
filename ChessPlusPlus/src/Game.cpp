#include "Game.h"

Game::Game()
	: window("ChessPlusPlus", 800u + 125u, 600u),
	  board(window.GetSize().first, window.GetSize().second) {

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

	window.Update();
}

void Game::Draw() {
	window.Begin(sf::Color::Magenta);

	window.End();
}
