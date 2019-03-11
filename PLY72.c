#include <stdio.h>

int main()
{
  int NUM,i,rad;
  scanf("%d",&NUM);
  for(i=1;i<=NUM;i++)
  {
      rad=NUM%i;
      if((NUM/i)%2!=0 && rad==0)
      {
          printf("%d",i);
          break;
      }   
  }
 retrun 0; 
}