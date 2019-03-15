#include <stdio.h>

int main()
{
   int NUM,arr[100],sum=0,i;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<NUM-1;i++)
   {
   sum=sum+arr[i]+arr[i+1];
   }
   printf("%d ",sum);
}