#include <stdio.h>
#include<math.h>

int main()
{
 
      int NUM,K,y,i,j,min,a[100],x;
   scanf("%d %d",&NUM,&K);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&a[i]);
       
   }
   x=NUM+1-K;
  for(i=0;i<x;i++)
   {
    min=a[0];
       for(j=1;j<NUM;j++)
       {
        if(min<a[j])
           {
               
               min=a[j];
               y=j;
            }
        }
        a[y]=0;
    }
  printf("%d\n",min);
 return 0;
}