#include "Board.h"
#include <exception>

Board::Board(const uint32_t width, 
	const uint32_t height) {

	SPRITE_WIDTH = 600 / ROWS;
	SPRITE_HEIGHT = 600 / COLUMNS;
	boardTile.setSize(sf::Vector2f(SPRITE_WIDTH, SPRITE_HEIGHT));
	/*tiles = {
		{0, 1, 0, 1, 0, 1, 0, 1},
		{1, 0, 1, 0, 1, 0, 1, 0},
		{0, 1, 0, 1, 0, 1, 0, 1},
		{1, 0, 1, 0, 1, 0, 1, 0},
		{0, 1, 0, 1, 0, 1, 0, 1},
		{1, 0, 1, 0, 1, 0, 1, 0},
		{0, 1, 0, 1, 0, 1, 0, 1},
		{1, 0, 1, 0, 1, 0, 1, 0},
	};*/

	auto IsEven = [](int n) { return n % 2 == 0; };

	for (uint32_t i = 0; i < ROWS - 1; i++) {
		for (uint32_t j = 0; j < COLUMNS - 1; i++) {
			tiles[i][j].pos = sf::Vector2f(static_cast<float>(SPRITE_WIDTH * (i + 1)), 
				static_cast<float>(SPRITE_HEIGHT * (i + 1)));
			if (IsEven(i)) {
				tiles[i][j].type = TILE_TYPE::WHITE;
			} else {
				tiles[i][j].type = TILE_TYPE::BLACK;
			}
			if (IsEven(j)) {

			} else {

			}
		}
	}
}

void Board::Update(const float dt) {

}

void Board::Draw(Window& window) {

}
