#include<stdio.h>
void main()
{ 
int a[50],n,k,i,tot=0;
clrscr();
printf("Enter the range");
scanf("%d",&n);
printf("Enter the count");
scanf("%d",&k);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
 tot=tot+a[i];
}
printf("%d",tot);
getch();
}
