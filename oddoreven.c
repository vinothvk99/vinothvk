#include<stdio.h>
void main()
{
 int a;
 clrscr();
 printf("Enter the Number to check");
 scanf("%d",&a);
 if(a%2==0)
 {
  printf("Even");
 }
 else
 {
  printf("Odd");
 }
 getch();
}
