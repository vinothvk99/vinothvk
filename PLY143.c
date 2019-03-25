#include<stdio.h>
int main()
{
    int num,mu,i,j,ar,br,tem=0;
    scanf("%d %d",&num,&mu);
    for(i=0;i<num;i++)
    {
        scanf("%d %d",&ar,&br);
        if(br==mu)
        {
            tem++;
        }
    }
    if(tem>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}