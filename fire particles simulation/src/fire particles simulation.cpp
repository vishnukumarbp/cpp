#include <iostream>
#include <SDL.h>
#include "Screen.h"

using namespace std;
using namespace localnp;

int main() {


	Screen screen;

	if(screen.init() == false) {
		return 1;
	}

	for(int y=0; y< Screen::SCREEN_HEIGHT; y++) {
		for(int x=0; x< Screen::SCREEN_WIDTH; x++) {
			screen.setPixel(x, y, 128, 0, 255);
		}

	}

	screen.update();

	bool quit = false;

	while (!quit) {
		if(screen.processEvents() == false){
			break;
		}
	}

	screen.close();


	return 0;
}
