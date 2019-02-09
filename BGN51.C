#include<stdio.h>
void main()
{
 char str[50];
 int i,count;
 scanf("%[^\n]s",str);
 scanf("%d",&count);
 for(i=0;i<count;i++)
 {
  printf("%s\n",str);
 }
 getch();
}