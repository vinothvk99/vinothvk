#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,i,total=0,a[1000];
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<NUM;i++)
{
    total+=a[i];
}
  printf("%d",total);
   

    return 0;
}