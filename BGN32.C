#include<stdio.h>
void main()
{
 int a[50],cou,i,max;
 clrscr();
 scanf("%d",&cou);
 for(i=0;i<cou;i++)
 {
  scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<cou;i++)
 {
  if(a[i]>=max)
  {
   max=a[i];
  }
 }
 printf("%d",max);
 getch();
}