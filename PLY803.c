#include <stdio.h>

int main()
{
   int Num,i,arr[100],sum;
  scanf("%d",&Num);
  
  for(i=0;i<Num;i++)
  {
      scanf("%d",&arr[i]);
  }
 sum=arr[0];
  for(i=1;i<Num;i++)
  {
   
   sum=sum&arr[i];
  }

  printf("%d",sum);
  
    return 0;
}
