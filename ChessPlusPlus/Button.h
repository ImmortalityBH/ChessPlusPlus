#pragma once

#include <SFML/Graphics.hpp>

class Button
{
public:
	Button();

	void Update(float dt);
	bool IsClicked();
private:
	bool clicked;

};

