#include<stdio.h>
void main()
{
 int a[50],cou,i,j,max;
 clrscr();
 scanf("%d",&cou);
 for(i=0;i<cou;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<cou;i++)
 {
  for(j=i;j<cou;j++)
  {
   if(a[i]>a[j] && i!=j)
   {
    max=a[i];
    a[i]=a[j];
    a[j]=max;
   }
  }
 }
 for(i=0;i<cou;i++)
 {
  printf("%d ",a[i]);
 }
 getch();
}