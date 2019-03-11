#include <stdio.h>

int main()
{
 char str[100],temp[100];
 int i,count=0,len,len1;
 gets(str);
 gets(temp);
 len=strlen(temp);
 len1=strlen(str);
if(len==len1)
{
 for(i=0;str[i]!='\0';i++)
 {
     if(str[i]==temp[i])
        count++;
 }
 if(count==len)  
    { printf("yes"); }
  else
  { printf("no"); }
    return 0;   
}
else
  { printf("no"); }
}