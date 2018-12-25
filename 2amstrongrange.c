#include<stdio.h>
void main()
{
 int num,num1,num2,num3,num4,i,j,rem,tot=0,temp=1,count=0;
 clrscr();
 printf("Enter number for Amstrong\n");
 scanf("%d %d",&num,&num2);
 for(i=num;i<=num2;i++)
 {
  num1=num3=num4=i;
  count=tot=0;
  while(num1>0)
  {
   count++;
   num1=num1/10;
  }
  while(num3>0)
  {
   temp=1;
   rem=num3%10;
   for(j=0;j<count;j++)
   {
    temp=temp*rem;
   }
   tot=tot+temp;
   num3=num3/10;
  }
  if(tot==num4)
  {
   printf("%d is Amstrong",tot);
  }
 }
 getch();
}
