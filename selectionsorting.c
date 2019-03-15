#include <stdio.h>


int main()
{
    int a[50],min,i,j,n,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=i;
        min=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                k=j;
            }
        }
        if(k!=i)
       {
        temp=a[i];
        a[i]=min;
        a[k]=temp;
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}