#include<stdio.h>
void main()
{
 char str[50];
 int i,count=1;
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==' '&&((str[i+1]>='A'&& str[i+1]<='Z') || (str[i+1]>='a'&& str[i+1]<='z')))
  {
   count++;
  }
 }
 printf("%d",count);
 getch();
}