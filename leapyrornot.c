#include<stdio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter the Year");
 scanf("%d",&year);
 if(year%4==0 && year%400==0 || year%100==0)
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
 getch();
}
