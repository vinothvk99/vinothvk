#include<stdio.h>
void main()
{
 int a;
 clrscr();
 printf("Enter the Number to check ");
 scanf("%d",&a);
 if(a>0)
 {
  printf("Postive");
 }
 else
 {
  if(a==0)
  {
   printf("Equal to zero");
  }
  else
  {
   printf("Negative");
  }
 }
}
