#include <stdio.h>

int main()
{
   int NUM,arr[100],i,j;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }   
      for(i=0;i<NUM;i++)
   {
     for(j=i+1;j<NUM;j++)
     {
         if(arr[i]!='\0' && arr[j]!='\0')
         {
      if(arr[i]==arr[j])  
      {
          arr[j]='\0';
      }   
     }   
     }
   }
      for(i=0;i<NUM;i++)
   {
        if(arr[i]!='\0')
        printf("%d ",arr[i]);       
   }
   return 0;
}