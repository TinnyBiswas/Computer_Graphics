#include <graphics.h>
#include <iostream>
using namespace std;

void plotPoints(int xc, int yc, int x, int y) {

    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1-r;

    plotPoints(xc, yc, x, y);

    while (x <= y) {
        x++;

        if (p < 0) {
            p = p + 2 * x + 1;
        } else {
            y--;
            p = p + 2 * x - 2 * y + 1;
        }

        plotPoints(xc, yc, x, y);
        delay(50);
    }
}

int main() {
    int gdriver = DETECT, gmode;
    int xc, yc, r;
    initgraph(&gdriver, &gmode, "");
    cout << "Enter the center of the circle (xc, yc): ";
    cin >> xc >> yc;
    cout << "Enter the radius of the circle: ";
    cin >> r;


    midpointCircle(xc, yc, r);

    getch();
    closegraph();

    return 0;
}
