#include <stdio.h>

int main()
{
   int NUM,arr[100],sum=0,i;
   scanf("%d",&N);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=1;i<NUM;i++)
   {
   sum=sum+arr[i];
   
   }
   printf("%d",sum);
}