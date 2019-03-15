#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,arr[100],i,j,count=0;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   
      for(i=0;i<NUM;i++)
   {
       
      for(j=i+1;j<NUM;j++)
   {
      if(arr[i]<arr[j])
      count++;   
   }
   
   }
   printf("%d",count);
    return 0;
}
