#include <stdio.h>

int main()
{
   int Num,i,j,m,temp;
    scanf("%d",&Num);
    int arr[Num];
    for(i=0;i<Num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<Num;i++)
	{
		for(j=i;j<Num;j++)
		{
			temp=((arr[i]) |	 (arr[j]));
			if(temp>m)
			{
				m=temp;
			}
		}
	}
	printf("%d",m);
  
    return 0;
}
