#include <stdio.h>

int main()
{
    int num,k,i,max,temp;
    scanf("%d %d",&num,&k);
    if(num>k)
    {
    temp=num;
    num=k;
    k=temp;
    }
    if(k%num==0)
    {
        max=num;
    }
    else
    {
        for(i=1;i<num/2;i++)
        {
            if(num%i==0)
            {
               if(k%i==0)
               {
                   max=i;
               }
            }
        }
    }
    printf("%d",max);
    return 0;
}
