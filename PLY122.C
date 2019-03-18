#include <stdio.h>
#include<math.h>
int main()
{
   int NUM,i,sum=0,arr[100],count;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   } 
   for(i=1;i<=NUM;i++)
   {
     count=ceil(NUM/i);
   sum=sum+count; 
   }
   printf("%d",sum);
   return 0;
}