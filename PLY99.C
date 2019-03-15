#include <stdio.h>

int main()
{
  int NUM,KUM,i,flag=1,count,temp=1;
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
  printf("%d",(flag/(temp)));
    return 0;
}