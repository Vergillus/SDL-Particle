#pragma once

#include <SDL.h>
#include <iostream>

namespace MY {

	class Screen
	{

	public:
		const static int SCREEN_WIDTH = 800;
		const static int SCREEN_HEIGHT = 600;

	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32 *m_buffer;

	public:
		Screen();
		bool Init();
		bool ProcessEvents();
		void Close();
		void Update();
		void SetPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
		void Clear();
	};

}

