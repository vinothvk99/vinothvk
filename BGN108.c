#include <stdio.h>
 
int main() 
{
	int NUM,arr[60],i;
	scanf("%d",&NUM);
	for(i=1;i<=NUM;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=NUM;i++)
	{
		if(i!=arr[i])
		{
			printf("\n%d",i-1);
			break;
		}
	}
 
	return 0;
}