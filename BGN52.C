#include<stdio.h>
void main()
{
 char str[50],str1[50];
 int i,count,count2;
 scanf("%s",str);
 scanf("%s",str1);
 count=strlen(str);
 count2=strlen(str1);
 if(count>count2 || count==count2)
 {
  printf("%s",str);
 }
 else
 {
  printf("%s",str1);
 }
 getch();
}