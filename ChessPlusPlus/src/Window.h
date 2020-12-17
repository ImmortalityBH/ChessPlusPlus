#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Window {
	struct Size {
		uint32_t width;
		uint32_t height;
	} size;
public:
	Window(const std::string& title, const uint32_t width, 
		const uint32_t height);
	void SetTitle(const std::string& title);
	std::string& GetTitle() { return title; }
	bool IsOpen() const { return window.isOpen(); };
	void Update();
	void Begin(const sf::Color& color);
	void End();
	Size GetSize() const { return size; };
	sf::RenderWindow& GetWindow() { return window; }
private:
	std::string title;
	uint32_t width;
	uint32_t height;
	sf::RenderWindow window;
};

