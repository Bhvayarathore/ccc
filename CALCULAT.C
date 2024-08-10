#include<stdio.h>
#include<conio.h>
void main()
{
double a,b;
char op;
printf("enter the fuction (+,-,/,*)");
scanf("%c",&op);
printf("enter two numbers");
scanf("%lf %lf",&a,&b);
switch (op){
case  '+':
printf("%lf+%lf=%lf",a,b,a+b);
break;
case '-':
printf("%lf-%lf=%lf",a,b,a-b);
break;
case '/':
printf("%lf/%lf=%lf",a,b,a/b);
break;
case '*':
printf("%lf*%lf=%lf",a,b,a*b);
break;
defalt:
printf("invalid request");
}
getch();
clrscr();
}