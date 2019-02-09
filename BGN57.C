#include<stdio.h>
void main()
{
 int count,num[50],max,min,i;
 scanf("%d",&count);
 for(i=0;i<count;i++)
 {
  scanf("%d",&num[i]);
 }
  max=num[0];
  for(i=0;i<count;i++)
 {
  if(num[i]>max && i!=0)
  {
   max=num[i];
  }
 }
 min=num[0];
  for(i=0;i<count;i++)
 {
  if(num[i]<min && i!=0)
  {
   min=num[i];
  }
 }
 printf("%d %d",min,max);
 getch();
}