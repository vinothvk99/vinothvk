#include <stdio.h>

int main()
{
    int i,j,k,a[50],num,temp;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num-1;i++)
    {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp; 
                for(j=i;j>0;j--)
                {
                    if(a[j]<a[j-1])
                    {
                      temp=a[j];
                      a[j]=a[j-1];
                      a[j-1]=temp;      
                    }
                }
            }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
