#include <stdio.h>

int main() {
	char a1[10000];
	int b,i;
	scanf("%s",a1);
	for(i=0;a1[i]!='\0';i++)
	{
		
		b=a1[i];
		if(b%2!=0)
		{
			printf("%c ",a1[i]);	
		}
	}
	return 0;
}