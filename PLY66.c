    
#include <stdio.h>

int main()
{
 char str[100],temp;
 int i,len,len1;
 scanf("%s",str);
 scanf("%c",&temp);
 for(i=0;str[i]!='\0';i++)
 {
     if(str[i]==temp)
       {
          printf("%d",i+1);
          break;         
       }
 }
return 0;
}