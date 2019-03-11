#include <stdio.h>

int main()
{
 char str[10000],temp[10000];
 int i,count=0,len,len1;
 scanf("%s",str);
 scanf("%s",temp); 
 len=strlen(temp);
 len1=strlen(str);
 if(len==len1)
 {
   for(i=0;str[i]!='\0';i++)
   {
      if(str[i]==temp[i])
        { count++; }
   }
    if(count!=0)  
      { printf("yes"); }
     else
      { printf("no"); }
 }
 else
  { printf("no"); }
    return 0;
}