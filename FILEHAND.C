#include<stdio.h>
main()
{
char ch;
FILE *fp;
fp=fopen("t1.txt","r");
if(fp==NULL){
printf("file not found");
exit(1);
}
ch=fgetc(fp);
while(!feof(fp)){
printf("%c",ch);
ch=fgetc(fp);
}
fclose(fp);
}
