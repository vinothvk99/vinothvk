#include<stdio.h>
void main()
{
 int num1,f1=-1,f2=1,f3,i;
 scanf("%d",&num1);
 for(i=0;i<=num1;i++)
 {
  f3=f1+f2;
  f1=f2;
  f2=f3;
  if(i!=0)
  {
   printf("%d ",f3);
  }
 }
 getch();
}