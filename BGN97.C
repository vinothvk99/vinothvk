#include <stdio.h>

int main()
{
    int NUM,M,min,gcd=1,i;
    scanf("%d %d",&NUM,&M);
    min = (NUM<M) ? NUM : M;

    for(i=1; i<=min; i++)
    {
    
        if(NUM%i==0 && M%i==0)
        {
            gcd = i;
        }
    }

    printf("%d",gcd);
return 0;
}