#include <stdio.h>

int main()
{
  int NUM,i,arr[100],sum;
  scanf("%d",&NUM);
  for(i=0;i<NUM;i++)
  {
      scanf("%d",&arr[i]);
  }
  sum=arr[0];
  for(i=1;i<NUM;i++)
  {
   sum=sum|arr[i];
  }
  printf("%d",sum);
    return 0;
}