#include<stdio.h>
void main()
{
 int num,fact=1,i,a=0;
 clrscr();
 printf("Enter number for next multiple\n");
 scanf("%d",&num);
 for(i=0;i<5;i++)
 {
  a=a+num;
  printf("%d ",a);
 }
 getch();
}
