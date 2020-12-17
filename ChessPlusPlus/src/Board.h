#pragma once

#include "Window.h"
#include <vector>
// Class makes up game board
// ROWS = horizontal
// COLUMNS = vertical
class Board {
	enum class TILE_TYPE : uint32_t {
		WHITE = 0, 
		BLACK = 1,
	};
	struct Tile {
		Tile() = default;
		sf::Vector2f pos;
		Board::TILE_TYPE type;
	};
public:
	Board(const uint32_t width, const uint32_t height);

	void Update(const float dt);
	void Draw(Window& window);
	
	static constexpr uint32_t ROWS = 8, COLUMNS = 8;
	uint32_t SPRITE_WIDTH, SPRITE_HEIGHT;
private:
	Tile tiles[ROWS][COLUMNS];
	sf::RectangleShape boardTile;
	sf::Texture blackTile;
	sf::Texture whiteTitle;
};

