#include <stdio.h>

int main()
{   
 int NUM,arr[50],pos,temp,i,j;
 scanf("%d",&NUM);
 for(i=0;i<NUM;i++)
 {
     scanf("%d",&arr[i]);
 }
   for(i=0;i<NUM+1-2;i++)
   {
    temp=arr[0];
    for(j=1;j<NUM;j++)
   {
       if(temp<arr[j])
       {   
           temp=arr[j];
           pos=j;   
       }
   }
  arr[pos]=0;
   }
   printf("%d",temp);  
    return 0;
}