#include <stdio.h>
#include<string.h>
int main()
{
char str[10000];
gets(str);
int temp,i,j,len,con;
scanf("%d",&temp);
len=strlen(str);
for(i=0;i<temp;i++)
{
con=str[len-1];
for(j=len-1;j>=0;j--)
{   
 str[j]=str[j-1];
}
str[0]=con;
}
printf("%s",str);
}