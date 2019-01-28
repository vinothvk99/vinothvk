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
  if(cou!=0)
  {
   printf("%d",cou);
  }
  else
  {
    printf("00");
  }
 }
 else
 {
   printf("0");
   printf("%d",num);
 }
 getch();
}
