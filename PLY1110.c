#include <stdio.h>

int main()
{
    int a[50],n,i,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n>1)
    { 
        
        for(i=0;i<n;i++)
        {
            sum=a[i];
            for(j=0;j<n;j++)
            {
                sum +=a[j];
            }
            printf("%d ",sum);
        }
    }
    else
    {
        printf("%d",a[0]);
    }
    return 0;
}
