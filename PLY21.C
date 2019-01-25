#include<stdio.h>
void main()
{
 char day[50];
 clrscr();
 scanf("%s",day);
 if(day[0]=='s' || day[0]=='S')
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
 getch();
}