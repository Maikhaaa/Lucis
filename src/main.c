#include "lucis.h"
#include <stdio.h>

int main() {
	Lucis_InitWindow(800, 600, "completely fucked btw");
	return 0;
}

void Lucis_HandleEvent(Lucis_Event *event) {
	if (event -> type == LUCIS_QUIT) {
		Lucis_Quit();
	}
}
