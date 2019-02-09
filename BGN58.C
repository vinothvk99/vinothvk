#include<stdio.h>
void main()
{
 int count,num[50],tot=0,i;
 scanf("%d",&count);
 for(i=0;i<count;i++)
 {
  scanf("%d",&num[i]);
 }
  for(i=0;i<count;i++)
 {
  tot=tot+num[i];
 }
 tot=tot/count;
 printf("%d",tot);
 getch();
}