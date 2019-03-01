#include <stdio.h>

int main()
{

int i,num;
char str[10000];
gets(str);

for(i=0;str[i]!='\0';i++)
{
    
    
    if(str[i]=='(')
    
    num++;
    else if(str[i]==')')
    num--;    
   
    
    
    
}
 if(num==0)
 printf("yes");
 else
 printf("no");
 
 
 
 return 0;
}
