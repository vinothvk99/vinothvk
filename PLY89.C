#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,arr[100],i,temp=0,j,count;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
      for(i=0;i<NUM;i++)
   {   
      for(j=i+1;j<NUM;j++)
      {
        count=abs(arr[i]-arr[j]);
        if(temp<count)
      {
       temp=count;   
      } 
      } 
   }
    printf("%d",temp);
    return 0;
}