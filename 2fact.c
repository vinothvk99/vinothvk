#include<stdio.h>
void main()
{
 int num,fact=1,i;
 clrscr();
 printf("Enter number for factorial\n");
 scanf("%d",&num);
 for(i=num;i>0;i--)
 {
  fact=fact*i;
 }
 printf("%d",fact);
 getch();
}
