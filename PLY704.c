#include <stdio.h>

int main()
{
   int NUM,temp,arr[1000],brr[1000],i,j,count=0,temp1;
   scanf("%d %d",&NUM,&temp);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
      for(i=0;i<NUM;i++)
    {   
     if(arr[i]<temp)
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
            temp1=brr[i];
            brr[i]=brr[j];
            brr[j]=temp1;    
        }
       }
       }
     for(i=0;i<count;i++)
   {  
   printf("%d ",brr[i]);
   }
    return 0;
}
