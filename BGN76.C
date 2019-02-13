#include <stdio.h>

int main()
{
    int N,i,f=0;
    scanf("%d",&N);
    for(i=1;i<N/2;i++)
    {
        if(N%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}