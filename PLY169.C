#include <stdio.h>

int main()
{
    int n1,n2,re,re1,pw=1,pw1=1,po,re2,cunt=0,bina=0,bina1=0;
    scanf("%d %d",&n1,&n2);
    while(n1)
    {
        re=n1%2;
        bina=bina+re*pw;
        n1=n1/2;
        pw=pw*10;
    }
    while(n2)
    {
        re1=n2%2;
        bina1=bina1+re1*pw1;
        n2=n2/2;
        pw1=pw1*10;
    }
    po=bina*bina1;
while(po)
{
    re2=po%10;
    po=po/10;
    if(rem2==1)
       c++;
    
}
printf("%d",cunt);
    return 0;
   
}