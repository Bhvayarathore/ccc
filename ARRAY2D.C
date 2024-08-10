#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j;
printf("working with 2d array of: 3 rows and 3 columns in each row\n");
for(i=0;i<=2;i++)
{
 printf("\n");
 for(j=0;j<=2;j++)
 {
 printf("%d ",arr[i][j]);
 }
}
getch();
clrscr();
}

