#include<stdio.h>
void main()
{
 int arr[50],spl,arr1[50];
 int num,i,len=0,j=0;
 clrscr();
 scanf("%d",&num);
 scanf("%d",&spl);
 for(i=0;i<num;i++)
 {
  scanf("%d",&arr[i]);
 }
 len=num-spl;
 for(i=len;i<num;i++)
 {
  arr1[j]=arr[i];
  j++;
 }
 for(i=0;i<len;i++)
 {
  arr1[j]=arr[i];
  j++;
 }
 for(i=0;i<num;i++)
 {
  printf("%d ",arr1[i]);
 }
 getch();
}