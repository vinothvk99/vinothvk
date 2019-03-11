#include <stdio.h>

int main()
{
 int NUM;
 scanf("%d",&NUM);
 int arr[NUM],i,count=1;  
for(i=0;i<NUM;i++)
 {
     scanf("%d",&arr[i]);
 }
  for(i=0;i<N;i++)
 {
  if(arr[i]<arr[i+1])
  {
      count++;
  }
 }
 if(count==NUM)
 printf("yes");
 else
 printf("no"); 
}
