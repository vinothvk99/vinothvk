#include<stdio.h>
void main()
{
 int num1,rem;
 scanf("%d",&num1);
 rem=num1%10;
 rem=10-rem;
 num1=num1+rem;
 printf("%d",num1);
 getch();
}