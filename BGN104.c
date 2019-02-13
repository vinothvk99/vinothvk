#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,K,a[1000],i,x;
   scanf("%d %d",&NUM,&K);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&a[i]);
   }
   x=K-1;
             printf("%d",a[x]);
return 0;
}