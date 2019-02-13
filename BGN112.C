#include <stdio.h>

int main()
{
int NUM,T=0,i;
	scanf("%d",&NUM);
	for(i=1;i<=NUM;i++)
	{
	
		if((NUM/i==2) && (NUM%i==0))
		{
			printf("%d",i);
			T=1;
			break;
		}
	}
	if(T==0)
	{
		printf("%d",NUM);
	}
   
    return 0;
}