#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    int x,y;
    initgraph(&gd,&gm,"c:\\turboC3\\bgi");
    x=getmaxx();
    y=getmaxy();
    line(50,y/2,50,50);
    line(20,y/2,300,y/2);
    bar3d(100,y/2,120,150,12,12);
    bar3d(140,y/2,160,110,12,12);
    bar3d(180,y/2,200,170,12,12);
    bar3d(220,y/2,240,180,12,12);
    getch();
    closegraph();
    return 0;
}