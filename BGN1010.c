#include <stdio.h>

int main()
{
    int NUM,product=1;
    scanf("%d",&NUM);
    if(N<=1000000000)
    while(NUM)
    {
        product = product * (NUM % 10);

             NUM = NUM/ 10;
    }
printf("%d",product);
    return 0;
}