#include <iostream>
#include <SDL.h>
using namespace std;

int main() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;
	long int MAX_PIXEL = SCREEN_WIDTH * SCREEN_HEIGHT;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init failed" << endl;
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Fire particles simulation",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		SDL_Quit();
		return 2;
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_PRESENTVSYNC);

	if (renderer == NULL) {
		cout << "Rendered not created" << endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 2;
	}

	SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

	if (texture == NULL) {
		cout << "texture not created" << endl;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 2;
	}

	Uint32 *buffer = new Uint32[MAX_PIXEL];

	memset(buffer, 0xFF, MAX_PIXEL*sizeof(Uint32));


	for (int i = 0; i < MAX_PIXEL; i++) {
		buffer[i]  = 0xFFFF00FF;
	}

	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);




	bool quit = false;
	SDL_Event event;

	while (!quit) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}

	}

	delete [] buffer;

	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);

	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
