#include <stdio.h>

int main()
{
int NUM,i,fact=1;
scanf("%d",&NUM);
if(NUM>=1 && NUM<=25)
{
    for(i=1;i<=NUM;i++)
    {   
        fact=fact*i;
    }
    printf("%d",fact);   
}
    return 0;
}