#include<stdio.h>
void main()
{
 int num,num2,num3,i,rem,tot=0,temp=1,count=0;
 clrscr();
 printf("Enter number for Amstrong\n");
 scanf("%d",&num);
 num2=num;
 num3=num;
 while(num>0)
 {
  count++;
  num=num/10;
 }
 while(num2>0)
 {
  temp=1;
  rem=num2%10;
  for(i=0;i<count;i++)
  {
   temp=temp*rem;
  }
  tot=tot+temp;
  num2=num2/10;
 }
 if(tot==num3)
 {
  printf("Yes");
 }
 else
 {
  printf("Not");
 }
 getch();
}
