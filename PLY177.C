#include <stdio.h>

int main()
{
  char str[1000];
	int i,len,flg=0;
        scanf("%s",str);
	len=strlen(str);
	for(i=2;i<=len/2;i++)
	{
		if(len%i==0)
		{
			flg=1;
			break;
		}
	}
	if(flg==0)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
    return 0;
}
