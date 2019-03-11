#include <stdio.h>

int main()
{
    int Num,i,j,temp=0;
    scanf("%d",&Num);
    int arr[Num];
    for(i=0;i<Num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<Num;i++)
	{
		temp=temp^arr[i];
	}
	printf("%d",temp);
    return 0;
}
