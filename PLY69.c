#include <stdio.h>
int main()
{
    int arr[1000],NUM,i,count;
    scanf("%d",&NUM);
    for(i=0;i<NUM;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<NUM;i++)
    {
        if(arr[i]==0)
        {
            count=i;
        }
    }
    for(i=0;i<count;i++)
    {
        if(arr[i]!=0)
        {
        printf("%d ",arr[i]);
        }
    }
return 0;
}