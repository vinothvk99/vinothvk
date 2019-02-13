#include <stdio.h>

int main() {
char S1[50];
int l;
scanf("%s",S1);
l=strlen(S1);
if(l%2==0)
{
    S1[l/2]='*';
		S1[(l/2)-1]='*';
}
else
{
    S1[l/2]='*';
}
printf("%s",S1);
	return 0;
}