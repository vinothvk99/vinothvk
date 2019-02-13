#include <stdio.h>
#include<string.h>
int main()
{
    
    char a[100];
	int i,len;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<len;i++)
	{
		if(i%2!=0)
		{
			printf("%c",a[i]);
		}
		
	}
    return 0;
}