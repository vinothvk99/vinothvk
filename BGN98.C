#include <stdio.h>

int main()
{
    int NUM,M,max,lcm,i;
    scanf("%d %d",&NUM,&M);
    max=NUM>M?NUM:M;
    for(i=0;i<max;i++)
    {
        if(max%NUM==0 && max%M==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    

    printf("%d",lcm);
return 0;
}