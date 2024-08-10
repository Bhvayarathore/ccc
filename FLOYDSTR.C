#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter the value of n :");
scanf("%d",&n); int p=1;
for(i=1; i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
  printf("%d",p++);
  }
  printf("\n");
  }
getch();
clrscr();
}