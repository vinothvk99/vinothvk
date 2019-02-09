#include<stdio.h>
void main()
{
 int a,b,tot;
 scanf("%d %d",&a,&b);
 tot=a*b;
 if(tot%2==0)
 {
  printf("even");
 }
 else
 {
  printf("odd");
 }
 getch();
}