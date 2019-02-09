#include<stdio.h>
void main()
{
 char str[50];
 int i,num;
 scanf("%s %d",str,&num);
 for(i=0;i<num;i++)
{
 printf("%c",str[i]);
}
 getch();
}