#include<stdio.h>
void main()
{
 char str[50];
 int i,flag=0;
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
{
 if((str[i]=='1'  || str[i]=='0'))
 {
  flag=0;
 }
 else
 {
  flag=1;
 }
}
if(flag==0)
{
 printf("yes");
}
else
{
 printf("No");
}
 getch();
}