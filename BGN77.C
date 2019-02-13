#include <stdio.h>

int main()
{
    int N;
	scanf("%d",&N);
	while(N!=0)
	{
		if(N%10==0)
		{
			printf("%d",N);
			break;
		}
		N++;
	}
return 0;
}