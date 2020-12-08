#include "SDL.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	//declare window and renderer
	SDL_Window* window;
	SDL_Renderer* renderer;	

	//initialize sdl2
	SDL_Init(SDL_INIT_VIDEO);
	//create window
	window = SDL_CreateWindow("Game Window", 	//title
			SDL_WINDOWPOS_UNDEFINED,	//initial x pos
			SDL_WINDOWPOS_UNDEFINED, 	//initial y pos
			640,				//width
			480,				//height
			0				//flags
			);
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	
	SDL_SetRenderDrawColor(renderer, 0, 0, 255,255);

	SDL_Rect rect = {220, 140, 200, 200};
	SDL_RenderFillRect(renderer, &rect);
	
	SDL_RenderPresent(renderer);

	SDL_Delay(2000);
	
	//Close and Destroy
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);

	
	SDL_Quit();
	
	return 0;
}
