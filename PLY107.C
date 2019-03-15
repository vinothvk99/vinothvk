#include <stdio.h>

int main()
{
    int len,ra,s=0,i;
    scanf("%d %d",&len,&ra);
    for(i=len;i<=ra;i++)
    {
        if(i%2!=0)
        {
            s+=i;
        }
    }
    printf("%d",s);
    return 0;
}