#include<stdio.h>
#include<conio.h>
void main()
{
char str[50],r_str[50];
int i=0,j;
clrscr();
scanf("%s",str);
j=strlen(str);
for(j=j-1;j>=0;j--)
{
 r_str[i]=str[j];
i++;
}
r_str[i]='\0';
printf("%s",r_str);
getch();
}
