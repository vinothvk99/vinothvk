#include<stdio.h>
void main()
{
 int a,b,tot=0,rem;
 scanf("%d",&a);
 while(a>0)
 {
  rem=a%10;
  tot=tot+rem;
  a=a/10;
 }
 printf("%d ",tot);
 getch();
}