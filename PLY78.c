#include <stdio.h>
int main()
{
    int Num,i,j,count,flag=0,arr[500];;
    scanf("%d",&Num);
    for(i=0;i<Num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<Num;i++)
    {
       count=1;
        for(j=0;j<Num;j++)
        {
            if(arr[i]==arr[j])
            {
             count++;   
            }
            if(arr[i]!=arr[j])
            {
                break;
            }
        }
        if(count>flag)
        {
         flag=count;
        }
    }	
    	printf("%d",flag);    	
    return 0;
}