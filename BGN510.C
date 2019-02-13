#include <stdio.h>
int main()
{
 int N,t=0;
 scanf("%d",&N);
     while(N!=1)
    {
        if(N%2!=0)
        {
            t=1;
        }
        N=N/2;
    }
    if(t==0)
    printf("yes");
    else
    printf("no");
return 0;
}