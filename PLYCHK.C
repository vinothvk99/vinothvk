#include<stdio.h>
void main()
{
 char str[50],s;
 int i,temp;
 clrscr();
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==' ')
  {
   if(str[i+1]>='a'&& str[i+1]<='z')
   {
    if(str[0]>='a' && str[0]<='z')
    {
     temp=str[0];
     s=temp-32;
     str[0]=s;
    }
    temp=str[i+1];
    s=temp-32;
    str[i+1]=s;
   }
  }
 }
 printf("%s",str);
 getch();
}
