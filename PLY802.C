#include <stdio.h>

int main()
{
   int NUM,arr[100],i,b;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   
      for(i=0;i<NUM;i++)
   {
     if(arr[i]>arr[i+1])
        b=arr[i];   
   }
    printf("%d ",b);
    return 0;
}
