#include<stdio.h>
void main()
{
 int num,rem,rev=0,pow=10;
 clrscr();
 scanf("%d",&num);
 while(num>0)
 {
  rem=num%10;
  rev=rev*pow+rem;
  num=num/10;
 }
 printf("%d",rev);
 getch();
}