#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(RED);
arc(160,50,0,420,50);
getch();
closegraph();
return 0;
}