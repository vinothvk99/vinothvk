#include<stdio.h>
void main()
{
 int f_num,sec_num,thr_num,tot=0;
 clrscr();
 scanf("%d %d %d",&f_num,&sec_num,&thr_num);
 tot=f_num*sec_num+f_num*thr_num;
 printf("%d",tot);
 getch();
}