#include <stdio.h>

int main()
{
int Num,i,j,max,temp;
    scanf("%d",&Num);
    int arr[Num];
    for(i=0;i<Num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=Num;i++)
	{
		for(j=i+1;j<=Num;j++)
		{
			temp=((arr[i])&(arr[j]));
			if(temp>max)
			{
				max=temp;
			}
		}
	}
	printf("%d",max);
    return 0;
}
