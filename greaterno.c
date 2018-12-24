#include<stdio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the Numbers ");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b)
 {
  printf("%d",a);
 }
 else
 {
  if(b>c)
  {
   printf("%d",b);
  }
  else
  {
   printf("%d",c);
  }
 }
}
