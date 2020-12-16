// AUTHOR: Immortality
// DATE STARTED: 12/15/20
// PROJECT NAME: ChessPlusPlus

#include <SFML/Graphics.hpp>
#include <Windows.h>
#include "Log.h"
#include "Game.h"

int main() {
	{ // Hide console window.
		HWND hWnd = GetConsoleWindow();
		if (hWnd == nullptr || !ShowWindow(hWnd, SW_HIDE)) {
			Log::Get().DebugPrint("Can't hide the console window!");
		}
	}
	sf::Clock clock;
	Log::Get().DebugPrint("Starting application...");
	try {
		// Create and initialize game.
		Game game;
		Log::Get().DebugPrint("Finished intialization at: " +
			std::to_string(clock.getElapsedTime().asSeconds()));
		game.Run();
	} catch (const std::exception& e) {
		Log::Get().DebugPrint(e.what(), Log::LOG_TYPE::ERR);
		return EXIT_FAILURE;
	}
	Log::Get().DebugPrint("Shutting down application...");
	Log::Get().DebugPrint("Time elapsed: " 
		+ std::to_string(clock.getElapsedTime().asSeconds()));
	return EXIT_SUCCESS;
}