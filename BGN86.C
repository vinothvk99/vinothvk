#include<stdio.h>
int main()
{
    int i,num,c=0;

    scanf ("%d",&num);
    for (i=1;i<=num;i++)
    {
        if(num%i==0)
        c=c+1;
    }
    if (c==2)
    printf ("no");
    else
    printf ("yes");
    return 0;
}