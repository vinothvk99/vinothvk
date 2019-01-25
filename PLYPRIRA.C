#include<stdio.h>
void main()
{
 int a,count=0,mincou=0,b,i,j;
 clrscr();
 scanf("%d",&a);
 scanf("%d",&b);
 for(i=a;i<=b;i++)
 {
  count++;
  for(j=2;j<=i;j++)
  {
   if(i%j==0 && i!=j)
   {
    mincou++;
    break;
   }
  }
 }
 count=count-mincou;
 printf("%d",count);
 getch();
}
