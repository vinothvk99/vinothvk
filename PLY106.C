#include <stdio.h>

int main()
{
   long NUM,count=0,temp,i,p=1,arr,ra,bum;
   scanf("%ld",&NUM);
   temp=NUM;
   while(temp)
   {
       count++;
       temp=temp/10;   
   }
       for(i=1;i<count;i++)
       {   
           pow=pow*10;
       }
       arr=NUM/pow;
       ra=NUM%10;
       bum=arr+ra;
       printf("%ld",bum);   
    return 0;
}