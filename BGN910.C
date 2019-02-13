#include <stdio.h>
#include<string.h>
int main()
{
    
    char a1[100];
	int i,l;
	scanf("%s",a1);
	l=strlen(a1);
	for(i=0;i<l;i++)
	{
		if(a1[i]>='0' &&a1[i]<='9')
		{
		    printf("%c",a1[i]);
		}
	}
    return 0;
}