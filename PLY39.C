#include<stdio.h>
int main()
{
 int num1,num2,i,j,k,count=0;
 scanf("%d %d",&num1,&num2);
 for(i=num1;i<=num2;i++)
 {
  for(j=1;j<=i/2;j++)
  {
   k=j*j;
   if(k==i)
   {
    count++;
   }
  }
 }
 printf("%d",count);
 return 0;
}