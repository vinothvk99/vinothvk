#include <stdio.h>

int main()
{
  char str[30];
	int Num,Ka,i,j,te=0;
	scanf("%d %d",&Num,&Ka);
	for(i=0;i<Num;i++)
	{
       scanf("%s",str);
	}
   for(i=0;i<Num;i++)
	{
	  te=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
			{
				te++;
			}
		}
		if(te==0)
		 break;
	
	}
	if(te==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
    return 0;
}