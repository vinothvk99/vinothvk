#include <stdio.h>

int main()
{
   int NUM,arr[100],i,j,temp;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
    for(i=0;i<NUM;i++)
   {   
   for(j=i+1;j<NUM;j++)
   {   
         if(arr[i]>arr[j])
         {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
   }   
   }       
   }
   for(i=NUM-1;i>=0;i--)
   {
    printf("%d ",i+1);
   }
   return 0;
}