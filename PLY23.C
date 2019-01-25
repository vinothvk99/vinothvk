#include<stdio.h>
void main()
{
 long int num,tot=0;
 int rem,mul;
 clrscr();
 scanf("%ld",&num);
 while(num>0)
 {
  rem=num%10;
  mul=rem*rem;
  tot=tot+mul;
  num=num/10;
 }
 printf("%ld",tot);
 getch();
}