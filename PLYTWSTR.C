#include<stdio.h>
void main()
{
 char str[50],str2[50],s;
 int i,len,len1;
 clrscr();
 scanf("%s",str);
 scanf("%s",str2);
 len=strlen(str);
 len1=strlen(str2);
 if(len==len1)
 {
  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]==str2[i])
   {
    len++;
    len1++;
   }
  }
 }
 if(len==len1)
 {
  printf("Yes");
 }
 else
 {
  printf("Not");
 }
 getch();
}
