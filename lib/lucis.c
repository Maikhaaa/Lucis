#include "lucis.h"

#include <SDL3/SDL.h>
#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_stdinc.h>
#include <SDL3/SDL_surface.h>
#include <SDL3/SDL_video.h>

#include <stdio.h>
#include <stdlib.h>

static SDL_Window *LucisWindow = NULL;
static SDL_Surface *LucisSurface = NULL;
static SDL_Event LucisEvent;

static void initSdl() {
	if (!SDL_Init(SDL_INIT_VIDEO)) {
		SDL_Log("FATAL: Couldn't initialize sdl due to: %s", SDL_GetError());
		exit(EXIT_FAILURE);
	}
}

void Lucis_InitWindow(unsigned int width, unsigned int height, const char *title) {
	initSdl();
	SDL_zero(LucisEvent);
	LucisWindow = SDL_CreateWindow(title, (int)width, (int)height, 0);
	LucisSurface = SDL_GetWindowSurface(LucisWindow);
	SDL_UpdateWindowSurface(LucisWindow);
	if (!LucisWindow) {
		SDL_Log("FATAL: Failed to initialize window due to: %s", SDL_GetError());
		SDL_Quit();
		exit(EXIT_FAILURE);
	}
	
	Lucis_HandleEvent(&LucisEvent);
};

void Lucis_Quit(void) {
	SDL_DestroyWindow(LucisWindow);
	LucisWindow = NULL;
	LucisSurface = NULL;
	SDL_Quit();
};

void Lucis_BeginDrawing() {

};

void Lucis_EndDrawing() {
};

void Lucis_DrawRect(LucisRect r) {

};

void Lucis_DrawImage(LucisRect r) {

};

void Lucis_ClearBackground(LucisColor c) {
	SDL_FillSurfaceRect(LucisSurface, NULL, SDL_MapSurfaceRGB( LucisSurface, c.r, c.g, c.b));
};
