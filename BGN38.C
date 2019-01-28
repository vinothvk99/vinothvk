#include<stdio.h>
void main()
{
 int num[50],cou,i;
 clrscr();
 scanf("%d",&cou);
 for(i=0;i<cou;i++)
 {
  scanf("%d",&num[i]);
 }
 for(i=0;i<cou;i++)
 {
  printf("%d %d\n",num[i],i);
 }
 getch();
}