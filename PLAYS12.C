#include<stdio.h>
#include<conio.h>
void main()
{
int fa=1,num,i;
clrscr();
scanf("%d",&num);
for(i=num;i>0;i--)
 fa*=i;
printf("%d",fa);
getch();
}
