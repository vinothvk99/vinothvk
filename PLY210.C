#include<stdio.h>
void main()
{
 char str[50],str1;
 int num,i;
 clrscr();
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  num=str[i];
  if(num>=88 && num<=90 || num>=120 && num<=122)
  {
   num=num-23;
   str1=num;
  }
  else
  {
  str1=num+3;
  }
  str[i]=str1;
 }
 printf("%s",str);
 getch();
}