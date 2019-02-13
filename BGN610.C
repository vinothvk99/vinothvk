#include <stdio.h>
#include<math.h>

int main()
{
    int K,sum=0,i;
    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}