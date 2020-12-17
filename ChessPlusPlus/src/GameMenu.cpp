#include "GameMenu.h"
#include "Log.h"
#include <exception>

GameMenu::GameMenu(Window& window)
	: window(window) {
	background.setSize(sf::Vector2f(256, window.GetSize().height));
	background.setPosition(sf::Vector2f(600 + 256 - 256, 0));
	//background.setPosition(sf::Vector2f(window.GetSize().width - 124, 0));
	background.setFillColor(sf::Color(195,195,195));

	sf::Font font;
	if (!font.loadFromFile("res/font/Roboto-Regular.ttf")) {
		throw std::exception("Couldn't load font.");
	}
	
	scoreText.setFont(font);
	scoreText.setCharacterSize(30);
	scoreText.setFillColor(sf::Color::Black);
	scoreText.setString("Player : CPU");
	
}

void GameMenu::Update(float dt) {

}

void GameMenu::Draw(Window& window) {
	window.GetWindow().draw(background);
	//window.GetWindow().draw(gameText);
}
