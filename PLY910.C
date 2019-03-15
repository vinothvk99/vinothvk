#include <stdio.h>

int main()
{
  int N,K,i,f=1,count,temp=1,temp1=1;
  scanf("%d %d",&NUM,&KUM);
  count=NUM-KUM;
  for(i=1;i<=NUM;i++)
  {
      flag=flag*i;
  }
    for(i=1;i<=count;i++)
  {
      temp=temp*i;
  }
      for(i=1;i<=KUM;i++)
  {
      temp1=temp1*i;
  }
  printf("%d",(flag/(temp*temp1))); 
    return 0;
}