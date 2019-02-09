#include<stdio.h>
void main()
{
 char str[50];
 int i,flag=0;
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
{
 if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')||(str[i]>='1' && str[i]<='9')|| (str[i]==' '))
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