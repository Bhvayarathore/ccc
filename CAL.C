#include<stdio.h>
#include<conio.h>
int main()
{
float a,b;
char op;
printf("enter the opration to be performed (+,-,*,/)=");
scanf("%c",&op);
printf("enter two numbers:");
scanf("%f %f",&a,&b);
switch(op){
case'+':
printf("%f + %f = %f",a,b,a+b);
break;

case'-':
printf("%f - %f = %f",a,b,a-b);
break;

case'*':
printf("%f * %f = %f",a,b,a*b);
break;

case'/':
printf("%f / %f = %f",a,b,a/b);
break;
}
getch();
clrscr();
}

