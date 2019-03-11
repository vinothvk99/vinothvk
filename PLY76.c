#include <stdio.h>

int main()
{
   int NUM,temp,arr[1000],i,j,count=0;
   scanf("%d %d",&NUM,&temp);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
      for(i=0;i<NUM;i++)
   {
       count=0;
       for(j=i+1;j<NUM;j++)
       { 
        if(arr[i]==arr[j])
        {
            count++;       
        }
       }
       if(count==temp-1)
       {   
        printf("%d",arr[i]);
       }
   }
    return 0;
}