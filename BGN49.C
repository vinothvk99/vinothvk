#include <stdio.h>

int main()
{
    int a[20],i,m=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
    return 0;
}