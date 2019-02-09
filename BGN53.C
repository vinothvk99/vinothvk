#include<stdio.h>
void main()
{
 char str[50],str1[50];
 int i,count;
 scanf("%s",str);
 scanf("%s",str1);
 count=strlen(str);
 for(i=0;str1[i]!='\0';i++)
 {
   str[count]=str1[i];
   count++;
 }
 str[count]='\0';
 printf("%s",str);
 getch();
}