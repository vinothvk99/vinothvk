#include <stdio.h>

int main()
{
    int NUM,i,f=0;
    scanf("%d",&NUM);
    for(i=1;i<NUM/2;i++)
    {
        if(NUM%i==0)
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