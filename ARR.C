#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],n,i;
printf("enter the number of elements ");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",arr[i]);
printf("\n");
}
int large=arr[0];
int small=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>large)
{
large=arr[i];

}
else if(arr[i]<small)
{
small=arr[i];
}
}
printf("large=%d small=%d",large,small);

getch();
clrscr();
}
