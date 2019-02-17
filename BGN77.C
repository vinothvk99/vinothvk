#include <stdio.h>

int main()
{
    int NUM;
	scanf("%d",&NUM);
	while(NUM!=0)
	{
		if(NUM%10==0)
		{
			printf("%d",NUM);
			break;
		}
		NUM++;
	}
return 0;
}