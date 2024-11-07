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
void bresenhamCircle(int xc, int yc, int r) {
 int x = 0, y = r;
 int d = 3 - 2 * r;
 plotPoints(xc, yc, x, y);
 while (y >= x) {
 x++;
 if (d > 0) {
 y--;
 d = d + 4 * (x - y) + 10;
 } else {
 d = d + 4 * x + 6;
 }
 plotPoints(xc, yc, x, y);
 delay(80);
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
 bresenhamCircle(xc, yc, r);
 getch();
 closegraph();
 return 0;
}
