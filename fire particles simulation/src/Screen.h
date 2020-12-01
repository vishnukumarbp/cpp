/*
 * Screen.h
 *
 *  Created on: 01-Dec-2020
 *      Author: vishnukumar
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace localnp {

class Screen {
public:
	static const int SCREEN_WIDTH = 800;
	static const int SCREEN_HEIGHT = 600;
	int MAX_PIXEL;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	bool init();
	void setPixel(int x, int y, unsigned char red, unsigned char green,
			unsigned char blue);
	void update();
	bool processEvents();
	void close();
};

} /* namespace localnp */

#endif /* SCREEN_H_ */
