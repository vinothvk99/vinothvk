#include<stdio.h>
void main()
{
 int num1,num2,tot;
 scanf("%d %d",&num1,&num2);
 tot=num1+num2;
 if(tot%2==0)
 {
  printf("Even");
 }
 else
 {
  printf("Odd");
 }
 getch();
}