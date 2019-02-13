#include <stdio.h>

int main()
{
	char S1[100];	
	int i;
	
		scanf("%[^\n]s",S1); 
	
	for(i=0; S1[i]!='\0'; i++)
	{
if(i==0)
		{
			if((S1[i]>='a' && S1[i]<='z'))
				S1[i]=S1[i]-32; 
			
		}
		if(S1[i]==' ')
		{
			i++;
			if(S1[i]>='a' && S1[i]<='z')
			{
				S1[i]=S1[i]-32; 
				
			}}}
	
	printf("%s",S1);
	
	return 0;
}