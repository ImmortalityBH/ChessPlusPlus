#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Window {
public:
	Window(const std::string& title, const uint32_t width, 
		const uint32_t height);
	void SetTitle(const std::string& title);
	std::string& GetTitle() { return title; }
	bool IsOpen() const { return window.isOpen(); };
	void Update();
	void Begin(const sf::Color& color);
	void End();
	std::pair<uint32_t, uint32_t> GetSize() { return std::make_pair(width, height); };
private:
	std::string title;
	uint32_t width;
	uint32_t height;
	sf::RenderWindow window;
};

