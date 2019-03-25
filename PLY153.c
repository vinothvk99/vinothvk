#include <stdio.h>

int main()
{
    int ar[100],i,j,wr[100],tem,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&wr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(wr[i]>wr[j])
            {
                tem=ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",ar[i]);
    }

return 0;
}