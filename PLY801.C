#include <stdio.h>

int main()
{
   int NUM,array[100],i;
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&array[i]);
   }
   
      for(i=0;i<NUM-1;i++)
   {
     if(array[i]<array[i+1])
     {
      printf("%d ",array[i+1]);
      }
       else
       {
        printf("%d ",array[i]);
      }
   }
    return 0;
}
