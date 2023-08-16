#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawHeart(int x, int y, int size) {
int i;
for (i = 0; i <= 360; i++) {
if (i % 10 == 0) {
double angle = i * M_PI / 180;
int x1 = x + size * 16 * sin(angle) * sin(angle) * sin(angle);
int y1 = y - size * (13 * cos(angle) - 5 * cos(2 * angle) + 2 * cos(3 * angle) - cos(4 * angle));
putpixel(x1, y1, RED);
}
}
}

int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
setcolor(RED);
settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
int x = (getmaxx() - textwidth("WE ALL LOVE YOU ASHU SIR")) / 2;
int y = (getmaxy() - textheight("WE ALL LOVE YOU ASHU SIR")) / 2;
outtextxy(x, y, "WE ALL LOVE YOU ASHU SIR");
drawHeart(x + textwidth("WE ALL LOVE YOU ASHU SIR") / 2, y + textheight("WE ALL LOVE YOU ASHU SIR") + 50, 40);
getch();
closegraph();
return 0;
}
