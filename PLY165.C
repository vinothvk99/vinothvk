#include <stdio.h>

int main() 
{
	int num,ka,nu[100],i,tem,j;
        scanf("%d%d",&num,&ka);
	for(i=0;i<num;i++)
	 scanf("%d",&nu[i]);
	for(i=0;i<ka;i++)
	{
		for(j=i+1;j<ka;j++)
		{
		if(nu[i]>nu[j])
		{
			tem=nu[i];
			nu[i]=nu[j];
			nu[j]=tem;
		}
		}
	}
	for(i=0;i<ka;i++)
	  printf("%d",nu[i]);

	for(i=ka;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
		if(nu[i]<nu[j])
		{
			tem=nu[i];
			nu[i]=nu[j];
			nu[j]=tem;
		}
		}
	}
	for(i=ka;i<num;i++)
	 printf("%d",nu[i]);
  return 0;	
}