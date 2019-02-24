#include<stdio.h>
int main()
{
 char str1[50],str2[50];
 int num,i,count;
 scanf("%s",str1);
 scanf("%s",str2);
 scanf("%d",&num);
 count=0;
 for(i=0;str1[i]!='\0';i++)
 {
  if(str1[i]!=str2[i])
  {
   count++;
  }
 }
 if(count==num)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
 return 0;
}