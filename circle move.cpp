#include <graphics.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 200, y = 200, radius = 50;

    while (1) {
        cleardevice();

        setfillstyle(SOLID_FILL, GREEN);
        circle(x, y, radius);
        floodfill(x + 2, y + 2, WHITE);


            char key = getch();
            if (key == 'r' || key == 'R') {
                x += 10;
            } else if (key == 'l' || key == 'L') {
                x -= 10;
            } else if (key == 'q' || key == 'Q') {
                break;
            }

        delay(50);
    }

    closegraph();
    return 0;
}
