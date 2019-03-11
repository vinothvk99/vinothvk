#include <stdio.h>

int main()
{
   int NUM,temp,arr[50],i,j,sum=0;
   scanf("%d %d",&NUM,&temp);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<NUM;i++)
   {
       for(j=i+1;j<NUM;j++)
       {
         if(arr[i]+arr[j]==temp)
         {
             sum++;
             break;
         }   
       }    
      }
      if(sum==1)
   {printf("yes");}
   else
   {printf("no");}
    return 0;
}