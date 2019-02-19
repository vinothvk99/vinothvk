#include <stdio.h>

int main()
{
    int a[50],b[50],count,count1,i,j=0,k,l,tot=0,max=0,tot1=0;
    scanf("%d %d",&count,&count1);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<count1;i++)
    {
        scanf("%d",&b[i]);
    }
    tot=count;
    tot1=count+count1;
    for(i=count;i<tot1;i++)
    {
        a[i]=b[j];
        tot++;
        for(k=0;k<tot;k++)
        {
            for(l=k+1;l<tot;l++)
            {
                if(a[k]<a[l])
                {
                    max=a[l];
                }
            }
        }
        j++;
        printf("%d ",max);
    }
    return 0;
}
