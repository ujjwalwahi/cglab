#include <graphics.h>
void
ginit(int *gd, int *gm, int color)
{
	initgraph(gd, gm, "");
	setcolor(color);
}

void
gclose()
{
	getch();
	closegraph();
}