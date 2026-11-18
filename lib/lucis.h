#ifndef LUCIS_H
#define LUCIS_H

#include <SDL3/SDL.h>
#include <stdbool.h>

#define LUCIS_QUIT SDL_EVENT_QUIT
#define Lucis_Event SDL_Event

typedef struct {
	unsigned char r, g, b, a;
} LucisColor;

typedef struct {
	unsigned char r, g, b;
} LucisColorRGB;


typedef struct {
	int x, y;
	unsigned int width, height;
} LucisRect;

void Lucis_InitWindow(unsigned int width, unsigned int height, const char *title);
bool Lucis_IsWindowClosed(void);
void Lucis_Quit(void);

void Lucis_BeginDrawing();
void Lucis_EndDrawing();
void Lucis_DrawRect(LucisRect r);
void Lucis_DrawImage(LucisRect r);
void Lucis_ClearBackground(LucisColor c);

// callbacks
void Lucis_HandleEvent(SDL_Event *event);

#endif // LUCIS_H
