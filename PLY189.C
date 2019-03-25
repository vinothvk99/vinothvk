#include <stdio.h>

int main()
{
    int Num1,Num2,xr,bina=0,r,po=1,cunt=0;
   scanf("%d %d",&Num1,&Num2);
   xr=Num1^Num2;
   while(xr>0)
   {
       ra=xr%2;
       bina=bina+ra*p;
      xr=xr/2;
       po=po*10;
   }
   while(bina>0)
   {
       ra=bina%10;
       if(ra==1)
       {
           cunt++;
       }
       bina=bina/10;
   }
   printf("%d",c); return 0;
}