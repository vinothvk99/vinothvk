#include <stdio.h>

int main()
{
    int Num,de=0,bin=1,ra,te=2;
    scanf("%d",&Num);
    while(Num)
    {
        ra=Num%10;
        de=de+ra*bin;
        Num=Num/10;
        bin=bin*2;
    }
    while(de>te)
    {
        te=te*2;
    }
    if(de<te)
    {
        printf("%d",te);
    }
   return 0;
}