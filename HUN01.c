#include <stdio.h>

int main(void) 
{
	int a[50],i,j,sum,b[50],count=0,n,temp;
   scanf("%d",&n);

for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   { 
    b[count]=a[i];
      a[j]=0;
    count++;
    break;
   }
  }
 }

 for(i=0;i<count;i++)
 {
  for(j=i+1;j<count;j++)
  {
  	if(b[i]>b[j])
  	{
  		temp=b[i];
  		b[i]=b[j];
  		b[j]=temp;
  	}
  }
 }
if(count==0)
{
printf("Unique");
}
else
{
	for(i=0;i<count;i++)
 {
 	if(b[i]!=0)
 	{
   printf("%d ",b[i]);
 	}
 }

}
	return 0;
}
