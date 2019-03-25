#include <stdio.h>
int main()
{
    int num,ra,tem=1,bina=0,cunt;
    scanf("%d",&num);
    while(num!=0)
    {
        ra=num%2;
        if(ra==1)
        {
            cunt++;
        }
         num/=2;
       bina=bina+(ra*tem);
      tem*=10;
      
    }
    printf("%d is",cunt);
    return 0;
}