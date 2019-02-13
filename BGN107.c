#include <stdio.h>

int main()
{
    int NUM,r,t=0;
    scanf("%d",&NUM);
    if(NUM<=1000)
    while(NUM)
    {
        r=NUM%10;
        t=t*10+r;
        NUM=NUM/10;
    }
printf("%d",t);
    return 0;
}