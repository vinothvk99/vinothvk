#include<stdio.h>
void main()
{
 int a,tot=0,i;
 clrscr();
 printf("Enter the Number");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
  tot=tot+i;
 }
 printf("%d",tot);
 getch();
}
