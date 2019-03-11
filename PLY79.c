#include <stdio.h>

int main()
{
int Num,M,arr[100000],i,j,t1,t2;
   scanf("%d",&Num);
 for(i=0;i<Num;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<Num;i++)
	{
	for(j=0;j<Num;j++)
	{
       t1=arr[j]-arr[i];
		t2=arr[i]-arr[j];
		if(t1>M)
		{
			M=t1;
		}
		if(t2>M)
		{
			M=t2;
		}
	}
	}
	printf("%d",M);
    return 0;
}
