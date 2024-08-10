#include<stdio.h>
#include<conio.h>
int main()
{
//area of circle//
int r,area,l,w,a;
float pie=3.14;
printf("enter the value ofradius:");
scanf("%d",&r);
area=pie*r*r;
printf("the area of circle is=%d \n",area);
//area of rectangle//
printf("enter the value of length:");
scanf("%d",&l);
printf("enter the value of width");
scanf("%d",&w);
a=l*w;
printf("the area of rectangle=%d",a);
getch();
clrscr();
}