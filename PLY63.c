#include <stdio.h>

int main()
{ 
 char str[500];
 int i,count=0;
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
     count++;
 }
   
   printf("%d",count);
    return 0;
}