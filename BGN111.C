#include <stdio.h>

int main()
{
    char S[1000];
   int NUM,c,i;
   scanf("%s %d",S,&NUM);
   c=strlen(S);
   
for(i=c;i>NUM;i--)
{
    
    
    printf("%c",S[i]);
}

   
    return 0;
}