#include <stdio.h>

int main()
{
    int num[50],n,k,i,flag=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&num[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(num[i]==k)
        {
           flag=1;
           break;
        }
        else
        {
             flag=50;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
