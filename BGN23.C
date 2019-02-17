#include <stdio.h>

int main()
{
int NUM,i,s=0;
    scanf("%d",&NUM);
    if(NUM<=1000)
    {
    for(i=2;i<=NUM/2;i++)
    {
    
        if(NUM%i==0)
            s=1;
            break;
        
        }

    if(s==0)
    {
    printf("yes");
}
}
else
{
    printf("no");
}
    

    return 0;
}