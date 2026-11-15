#ifndef LUCIS_H
#define LUCIS_H

typedef struct {
	unsigned char r, g, b, a;
} Color;

typedef struct {
	int x, y;
	unsigned int width, height;
} Rect;

void Lucis_InitWindow(unsigned int width, unsigned int height, const char *title);
void Lucis_Close(void) {}

void Lucis_BeginDrawing();
void Lusic_EndDrawing();
void Lusic_DrawRect();
void Lucis_ClearBackground() {}

#endif // LUCIS_H
