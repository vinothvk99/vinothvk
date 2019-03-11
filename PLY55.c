#include <stdio.h>
int main()
{
    int P,A,i,j,per,are,count=0;
	scanf("%d %d",&P,&A);
	for(i=1;i<=P;i++)
	{
	    for(j=1;j<=A;j++)
	{
	    per=2*(i+j);
	    are=i*j;
	    if(per==P && are==A)
	    {
	        count++;      
	        break;
	    }
	}
	}
	if(count==0)
	{
	    printf("no");
	}else
	 printf("yes");
}