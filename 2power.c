#include<stdio.h>
void main()
{
 int num,a,i,temp=1;
 clrscr();
 printf("Enter the number\n");
 scanf("%d",&num);
 printf("Enter the power\n");
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
  temp=temp*num;
 }
 printf("%d ",temp);
 getch();
}
