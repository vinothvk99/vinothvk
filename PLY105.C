#include <stdio.h>
int main()
{
    long int NUM,arr[100],i=0,KO,PO,temp,sum,count=1,ra;
    scanf("%ld %ld %ld",&NUM,&KO,&PO);
    temp=NUM;
    while(temp)
    {
        temp=temp/10;
        count=count*10;
    }
    count=count/10;
    while(NUM)
    {
        ra=NUM/count;
        arr[i]=ra;
        i++;
        NUM=NUM%count;
        count=count/10;
    }
    while(KO)
    {
        sum=a[PO];
        KO--;
        PO++;
    }
    printf("%ld ",sum);
return 0;
}