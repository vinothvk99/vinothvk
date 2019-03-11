#include <stdio.h>

int main() 
{
int NUM,i;
scanf("%d",&NUM);
for(i=1;i<=NUM;i++)
{
    if(NUM%i==0 && i%2!=0)
    {
        printf("%d ",i);   
    }   
}
  return 0;
}