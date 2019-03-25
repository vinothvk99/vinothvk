#include <stdio.h>

int main()
{
     int ar,br,ft=1,gcd,i;
    scanf("%d %d",&ar,&br);
    for(i=1;i<=ar;i++)
    {
        ft=ft*i;
    }
    ar=ft;
    ft=1;
    for(i=1;i<=br;i++)
    {
        ft=ft*i;
    }
    b=fact;
    for(i=1;i<=ar && i<=br;i++)
    {
        if(ar%i==0 && br%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
        
   return 0;
}