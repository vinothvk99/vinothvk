#include <stdio.h>
#include<string.h> 
int main() 
{
    char S[1000000];
    int i,j,f1=0;
    scanf("%s",S);
    for(i=0;S[i]!='\0';i++)
    {
        for(j=i+1;S[j]!='\0';j++)
        {
            if(S[i]==S[j])
            {
                printf("No");
                f=1;
                break;
            }
        }
        if(f1==1)
        break;
    }
    if(f1==0)
    {
        printf("Yes");
    }
    return 0;
}