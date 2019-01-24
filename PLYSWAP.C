#include<stdio.h>
void main()
{
 char str[50],temp;
 int i;
 clrscr();
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  temp=str[i];
  str[i]=str[i+1];
  str[i+1]=temp;
  i++;
 }
 printf("%s",str);
 getch();
}