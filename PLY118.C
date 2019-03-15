#include <stdio.h>

int main()
{
   int NUM,arr[100],sum=0,i,j;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<NUM;i++)
   { 
    sum=sum+arr[i];
    printf("%d ",sum);
}
return 0;
}