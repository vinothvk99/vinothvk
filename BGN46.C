#include<stdio.h>
void main()
{
 char str[50];
 int i,count=0;
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='1' && str[i]<='9'))
  {
  }
  else
  {
   count++;
  }
 }
 printf("%d",count);
 getch();
}