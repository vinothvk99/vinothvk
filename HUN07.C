#include <stdio.h>

int main()
{
    int a[50],num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2!=0)
            {
                printf("%d ",a[i]);
            }
        }
        else
        {
            if(a[i]%2==0)
            {
                printf("%d ",a[i]);
            }
        }
    
    }

    return 0;
}
