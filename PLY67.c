#include <stdio.h>

int main()
{
 char str[100],temp;
 int i,count=0,len,len1;
 scanf("%s",str);
 scanf("%c",&temp);
 for(i=0;str[i]!='\0';i++)
 {
     if(str[i]==temp)
       {
        count++;         
       }
 } 
printf("%d",count);
return 0;
}