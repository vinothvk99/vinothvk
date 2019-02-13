#include<stdio.h>
int main()
{
    int i,NUM,f=0;
    scanf ("%d",&NUM);
        if (NUM%13 == 0)
        {
            f=1;
        }
    if(f==1)
    printf("yes");
    else
    printf("no");
    return 0;
}