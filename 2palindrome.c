#include<stdio.h>
void main()
{
 int rem,num,a,i,temp=0,pow=10;
 clrscr();
 printf("Enter the number\n");
 scanf("%d",&num);
 a=num;
 while(num>0)
 {
  rem=num%10;
  temp=temp*pow+rem;
  num=num/10;
 }
 if(temp==a)
 {
  printf("Yes");
 }
 else
 {
  printf("Not");
 }
 getch();
}
