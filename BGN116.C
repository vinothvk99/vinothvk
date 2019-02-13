#include <stdio.h>
#include<math.h>

int main()
{
 
    int NUM,K,i,l=0,a[100];
   scanf("%d %d",&NUM,&K);
   
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&a[i]);
    }
  for(i=0;i<NUM;i++)
   {
if(a[i]%2!=0)
  {
    l++;
      
      if(l==K)
       printf("%d",a[i]);
 }
 }
return 0;
}