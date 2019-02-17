#include <stdio.h>
#include<math.h>

int main()
{
    int K,sum1=0,i;
    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        sum1+=i;
    }
    printf("%d",sum1);
    return 0;
}