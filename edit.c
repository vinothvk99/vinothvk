#include<stdio.h>
#include<conio.h>
void main()
{
char string[50],r_str[50];
int i=0,j;
clrscr();
scanf("%s",string);
j=strlen(string);
for(j=j-1;j>=0;j--)
{
 r_str[i]=string[j];
i++;
}
r_str[i]='\0';
printf("%s",r_str);
getch();
}
