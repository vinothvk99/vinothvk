#include <stdio.h>

int main()
{
    int a[20],i,NUM=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i]>NUM)
        {
            NUM=a[i];
        }
    }
    printf("%d",NUM);
    return 0;
}