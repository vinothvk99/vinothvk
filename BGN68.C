#include<stdio.h>
void main()
{
 int a[50],count,k,i,flag=0;
 scanf("%d %d",&count,&k);
 for(i=0;i<count;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<count;i++)
 {
  if(a[i]==k)
  {
   flag=0;
   break;
  }
  else
  {
   flag=1;
  }
 }
 if(flag==1)
 {
  printf("No");
 }
 else
 {
  printf("Yes");
 }
 getch();
}