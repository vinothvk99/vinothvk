#include <stdio.h>

int main()
{
int Num,arr[100000],i,K;
   scanf("%d %d",&Num,&K);
   for(i=0;i<Num;i++)
   {
       scanf("%d",&arr[i]);
   }
   
      for(i=0;i<Num;i++)
   {
    if(arr[i]==K)
     {
         printf("%d ",i+1);
         break;
         
     }
       
     
   }
    return 0;
}
