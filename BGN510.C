#include <stdio.h>
int main()
{
 int NUM,t=0;
 scanf("%d",&NUM);
     while(NUM!=1)
    {
        if(NUM%2!=0)
        {
            t=1;
        }
        NUM=NUM/2;
    }
    if(t==0)
    printf("yes");
    else
    printf("no");
return 0;
}