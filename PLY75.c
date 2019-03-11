#include <stdio.h>

int main()
{
   int NUM,arr[100],brr[100],i,j,count=0,temp;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
      for(i=0;i<NUM;i++)
   {   
     if(arr[i]<NUM)
      {   
        brr[count]=arr[i];
        count++;
      } 
    }
      for(i=0;i<count;i++)
       {
       for(j=i+1;j<count;j++)
       {  
        if(brr[i]>brr[j])
        {
            temp=brr[i];
            brr[i]=brr[j];
            brr[j]=temp;    
        }
       }
      }
     for(i=0;i<count;i++)
     {   
       printf("%d ",brr[i]);
     }
    return 0;
}