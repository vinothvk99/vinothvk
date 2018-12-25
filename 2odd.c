#include<stdio.h>
void main()
{
 int num,num1,i;
 clrscr();
 printf("Enter number for range\n");
 scanf("%d %d",&num,&num1);
 for(i=num;i<=num1;i++)
 {
  if(i%2==0)
  {
   printf("%d ",i);
  }
 }
 getch();
}
