#include "Window.h"
#include <exception>

Window::Window(const std::string& title, const uint32_t width,
	const uint32_t height)
	: title(title), width(width), height(height),
	  window(sf::VideoMode(this->width, this->height), this->title, 
		sf::Style::Default) {
	if (!window.isOpen()) {
		throw std::exception("Could not open SFML window!");
	}
	window.setFramerateLimit(60);
}

void Window::SetTitle(const std::string& title) {
	this->title = title;
}

void Window::Update() {
	sf::Event evt;
	while (window.pollEvent(evt)) {
		switch (evt.type) {
		case sf::Event::Closed:
			window.close();
			break;
		case sf::Event::Resized:
			break;
		case sf::Event::KeyPressed:
			break;
		case sf::Event::KeyReleased:
			break;
		}
	}
}

void Window::Begin(const sf::Color& color)
{
	window.clear(color);
}

void Window::End()
{
	window.display();
}

