#include<stdio.h>
void main()
{
 char str[50],str1[50];
 int num,i,j=0;
 clrscr();
 scanf("%d",&num);
 str[num]='\0';
 scanf("%s",str);
 for(i=num-1;i>=0;i--)
 {
  if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
  {}
  else
  {
   str1[j]=str[i];
   j++;
  }
 }
 str1[j]='\0';
 printf("%s",str1);
 getch();
}