#include<stdio.h>
void main()
{
 int hr,min,hrs,mins,cou,cou1,sub;
 clrscr();
 scanf("%d %d",&hr,&min);
 scanf("%d %d",&hrs,&mins);
 cou=hr*60+min;
 cou1=hrs*60+mins;
 sub=cou-cou1;
 if(sub>=60)
 {
  cou=sub/60;
  printf("%d ",cou);
  cou=sub%60;
  printf("%d",cou);
 }
 else
 {
  printf("0");
  printf(" %d",sub);
 }
 getch();
}