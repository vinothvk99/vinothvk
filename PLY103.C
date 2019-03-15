#include <stdio.h>

int main()
{
int NUM,i,count,arr[100];
scanf("%d",&NUM);
for(i=0;i<NUM;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<NUM-1;i=i+2)
{
    count=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=count;
}
for(i=0;i<NUM;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}