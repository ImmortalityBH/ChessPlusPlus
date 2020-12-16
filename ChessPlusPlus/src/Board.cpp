#include "Board.h"
#include <exception>

Board::Board(const uint32_t width, 
	const uint32_t height) {

	SPRITE_WIDTH = width / ROWS;
	SPRITE_HEIGHT = height / COLUMNS;

	

	auto AssignOpposite = [this](uint32_t x, uint32_t y) {
		auto IsEven = [](int n) { return n % 2 == 0; };
		if (IsEven(x)) {
			//this->tiles[x][y].setFillColor();
		} else if (!IsEven(y)) {
			//this->tiles[x][y].setFillColor();
		}
		
	};

	/*for (uint32_t i = 0; i < ROWS; i++) {
		for (uint32_t j = 0; j < COLUMNS; i++) {
			tiles[i][j].setSize(sf::Vector2f(static_cast<float>(SPRITE_WIDTH), 
				static_cast<float>(SPRITE_HEIGHT)));
			tiles[i][j].setFillColor(sf::Color::White);
		}
	}*/
}

void Board::Update(const float dt) {

}

void Board::Draw(const sf::RenderWindow& window) {

}
