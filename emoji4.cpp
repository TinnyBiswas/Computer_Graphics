#include <graphics.h>
int main(){
    initwindow(600, 600);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    circle(300, 240, 100);

    //arc(260, 210, 0, 180, 15);
    //right eye
    fillellipse(320, 210, 10, 20);
    fillellipse(280,210,10,20);
    fillellipse(285,215,5,10);
    fillellipse(315,215,5,10);
    //mouth
    arc(300,290,0,180,30);
    //arc(260, 210, 0, 180, 15);
    arc(300, 310, 180, 360, 9);
    //line(300,210,270,190);
    arc(273, 196, 0, 450, 15);
    arc(327, 196, 450, 180, 15);
    getch();
    closegraph();
}

