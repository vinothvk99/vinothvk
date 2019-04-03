#include <stdio.h>

int main()
{
    int a[50],num,count=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                count++;
                break;
            }
        }
        if(count==1)
        {
            break;
        }
    
    }

    return 0;
}
