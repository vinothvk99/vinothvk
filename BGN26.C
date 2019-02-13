#include <stdio.h>

int main()
{
int n1,n2,i,j,s=0;
    scanf("%d %d",&n1,&n2);
    
    for(i=n1+1;i<n2;i++)
    {
        for(j=2;j<=i/2;j++)
        {s=0;

        if(i%j==0)
        {
            s=1;
            break;
        }
        }
        if(s==0)
        {
        printf("%d ",i);
        }
    }
    
    

    return 0;
}