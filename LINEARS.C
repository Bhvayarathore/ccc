#include<stdio.h>
#include<conio.h>
void main(){
int arr[]={1,2,12,34,55,32,11};
int key,i,index=-1;
clrscr();
printf("enter the number to search :");
scanf("%d",&key);
for(i=0;i<7;i++)
{
 if(arr[i]==key)
 {
  index=i;
  break;
  }
 }
  if(index==-1)
  {
  printf("not found");
  }
  else
  {
  printf("element found at %d",index);
  }
getch();
}