#include<stdio.h>
#include<conio.h>
int main()
{
//area of circle//
int r;
float pie=3.14;
printf("enter the radius of the circle:");
scanf("%d",&r);
int area;
area=pie*r*r;
printf("the area of circle=%d\n",area);
//area of rectangle//
int l,w,area2;
printf("enter the length of the rectangle ");
scanf("%d",&l);
printf("enter the width of the rectangle ");
scanf("%d",&w);
area2=l*w;
printf("the area of rectangle is: %d",area);
getch();
clrscr();
}
