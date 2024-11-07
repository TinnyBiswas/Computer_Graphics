#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

    int main( )
	{
	    int x1,y1,x2,y2;
	    float m,x,y;
	    /* request auto detection */
	    int gdriver = DETECT, gmode, errorcode;

	    /* initialize graphics and local variables */
	    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	     printf("Using DDA Algorithm");
	    x1=100;
	    x2=300;
	    y1=350;
	    y2=350;

	    m=(y2-y1)/(x2-x1);
	    x=x1,y=y1;

	    if(m<=1)
		{
		 x=x1;
		 while(x<=x2)
		    {
		      putpixel(y,x,3);
		      x=x+1;
		      y=y+m;
		    }
		 }
	    if(m>1)
		{
		 y=y1;
		 while(y<=y2)
		    {
		      putpixel(y,x,3);
		      x=x+(1/m);
		      y=y+1;
		    }
		 }

       getch();
       closegraph();
       return 0;
   }
