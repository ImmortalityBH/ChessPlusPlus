#pragma once

#include <string>

class Window {
public:
	Window(const std::string& title, const uint32_t width, 
		const uint32_t height);
	void SetTitle(const std::string& title);
	void Clear();
private:
	std::string title;
	uint32_t width;
	uint32_t height;
};

