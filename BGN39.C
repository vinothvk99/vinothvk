#include<stdio.h>
void main()
{
 int num,cou,i;
 clrscr();
 scanf("%d",&num);
 if(num>60)
 {
  cou=num/60;
  printf("%d ",cou);
  cou=num%60;
  printf("%d",cou);
 }
 getch();
}