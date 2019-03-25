#include <stdio.h>

int main()
{
	char stg[30];
	int i,ka;
	scanf("%s %d",stg,&ka);
	for(i=ka-1;stg[i]!='\0';i=i+ka)
           printf("%c ",stg[i]);
    return 0;
}