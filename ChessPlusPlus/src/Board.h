#pragma once

#include <SFML/Graphics.hpp>

// Class makes up game board
// ROWS = horizontal
// COLUMNS = vertical
class Board
{
public:
	Board(const uint32_t width, const uint32_t height);

	void Update(const float dt);
	void Draw(const sf::RenderWindow& window);
	
	static constexpr uint32_t ROWS = 8, COLUMNS = 8;
	uint32_t SPRITE_WIDTH, SPRITE_HEIGHT;
private:
	sf::RectangleShape tiles[ROWS][COLUMNS];
	sf::Texture blackTile;
	sf::Texture whiteTitle;
};

