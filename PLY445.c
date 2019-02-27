#include <stdio.h>

int main()
{
    char str[50];
    int i,j,count=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
       for(j=i+1;str[j]!='\0';j++)
       {
           if(str[i]==str[j])
           {
               count++;
           }
       }
       if(count==0)
       {
           printf("%c ",str[i]);
       }
    }
    return 0;
}
