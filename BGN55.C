#include<stdio.h>
void main()
{
 int i=0,count;
 scanf("%d",count);
 while(count>0)
 {
  i++;
  count=count/10;
 }
  printf("%d",i);
 getch();
}