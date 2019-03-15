#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,arr[100],i,temp=0,count=0;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   } 
      for(i=0;i<NUM;i++)
   {
       if(arr[i]%2==0)
       { 
       count++;
       }
    if(arr[i]%2!=0)
      {
       temp++;
      }
  }
   if(count==NUM-1)
   {   
            for(i=0;i<NUM;i++)
   { 
       if(arr[i]%2!=0)
      {
       printf("%d",arr[i]);
      } 
     }
   }
    if(temp==NUM-1)
   {   
     for(i=0;i<NUM;i++)
   {
       if(arr[i]%2==0)
       printf("%d",arr[i]);       
   }
}
    return 0;
}