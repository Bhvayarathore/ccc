#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,temp;
int arr[]={4,6,10,3,1};
n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n-1;i++)
{
printf("%d\n",arr[i]);
}
getch();
clrscr();
}