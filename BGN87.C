#include<stdio.h>
int main()
{
    int i,NUM;

    scanf ("%d",&NUM);
   for(i=1; i <= NUM; ++i)
    {
        if (NUM%i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}