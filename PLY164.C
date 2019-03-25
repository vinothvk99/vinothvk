#include <stdio.h>

int main()
{
	char stg[30];
	int i,ka;
	scanf("%s %d",stg,&ka);
	for(i=ka-1;stg[i]!='\0';i=i+ka)
		if(stg[i]>=97 && stg[i]<=122)
			stg[i]=stg[i]-32;
	printf("%s",stg);
  return 0;
	
}