#include<stdio.h>
void main()
{
 int num,num1,i,j,temp=0;
 clrscr();
 printf("Enter number for Amstrong\n");
 scanf("%d %d",&num,&num1);
 for(i=num;i<=num1;i++)
 {
  for(j=2;j<i;j++)
  {
   if(i%j!=0 || i==3)
   {
    temp=1;
    break;
   }
  }
  if(temp==1)
  {
   printf("%d ",i);
  }
  temp=0;
 }
 getch();
}
