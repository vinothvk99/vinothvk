#include<stdio.h>
void main()
{
 int a,b,pow=1,rem;
 scanf("%d",&a);
 b=a;
 while(b>0)
 {
  b=b/10;
  pow=pow*10;
 }
 while(a>0)
 {
  pow=pow/10;
  rem=a/pow;
  a=a%pow;
  printf("%d ",rem);
 }
 getch();
}