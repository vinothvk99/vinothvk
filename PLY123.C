#include <stdio.h>
#include<string.h>
int main()
{
	char ar[20];
        int flag;
	scanf("%s",ar);
	if(ar[0]<'3' && ar[1]<'10' && ar[2]=='/' && ar[3]<'1' && ar[4]<'10' && ar[5]=='/' && ar[6]<'10' && ar[7]<'10' && ar[8]<'10' && ar[9]<'10')
	{
	   flag=1;
	}
	else
	{
	  flag=0;	
	}
	if((ar[0]=='3' && ar[1]<'2') && (ar[3]<='1' && ar[4]<'3'))
	{
	    flag=1;
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}	
	return 0;
}