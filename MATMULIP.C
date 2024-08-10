#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r1,c1,r2,c2,k,sum;
//sum=0;
int a[40][40],b[40][40],c[40][40];
//taking input
printf("enter th row and column of first matrix:");
scanf("%d %d",&r1,&c1);
printf("enter the row and column of second matrix:");
scanf("%d %d",&r2,&c2);
//input of matrix a
printf("enter the matrix a:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
//input of matrix b
printf("enter matrix b:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d\t",&b[i][j]);
}
printf("\n");
}
//multiplying the matrix
printf("result:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<r1;k++)
{
c[i][j]+=a[i][k]*b[k][j];
//sum=c[i][j];
}
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

getch();
clrscr();
}