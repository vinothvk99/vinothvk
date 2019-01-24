#include<stdio.h>
int value();
int main()
{
 char str[50];
 int res=0,i,c=0;
 int s1,s2;
 clrscr();
 scanf("%s",str);
 c=strlen(str);
 for(i=0;i<c;i++)
 {
  s1=value(str[i]);
  if(i+1<c)
  {
   s2=value(str[i+1]);
   if(s1>=s2)
   {
    res=res+s1;
   }
   else
   {
    res=res+s2-s1;
    i++;
   }
  }
  else
  {
   res=res+s1;
   i++;
  }
 }
 printf("%d",res);
 getch();
 return 0;
}
int value(char r)
{
 if(r=='I')
  return 1;
  if(r=='V')
  return 5;
  if(r=='X')
  return 10;
  return -1;
}