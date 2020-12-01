#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"

using namespace std;
using namespace localnp;

int main() {

	Screen screen;

	if (screen.init() == false) {
		return 1;
	}

	// Look for messages/events
	bool quit = false;

	while (!quit) {

		int elapsed = SDL_GetTicks();

		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, red, green, blue);
			}

		}

		// Draw the screen
		screen.update();

		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
