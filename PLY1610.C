#include <stdio.h>
int main()
{
    int ar,br,cunt,i=0,re,sum=0,tem=1;
    scanf("%d%d",&ar,&br);
    cunt=ar|br;
    while(cunt)
    {
        re=cunt%2;
        sum=sum+(re*tem);
        tem=tem*10;
        cunt=cunt/2;
        if(re==1)
         i++;        
    }
    printf("%d",i);

    return 0;
}