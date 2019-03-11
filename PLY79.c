#include <stdio.h>

int main()
{
    	int NUM,temp,i,j,flag=0;
	scanf("%d %d",&NUM,&temp);
	int arr[NUM];
	for(i=0;i<NUM;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<NUM-temp;i++)
	{
			printf("%d ",arr[i]);
	}
    return 0;
}