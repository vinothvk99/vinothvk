#include <stdio.h>

int main()
{
     int ar[100],Num,i,Ka,flg=0,bi;
    scanf("%d %d",&Num,&Ka);
    for(i=0;i<Num;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<Num;i++)
    {
       if(ar[i]==Ka)
        {
           printf("%d",ar[i]);
           flg=1;
           break;
        }
        else
        {
            if(ar[i]<Ka)
            {
                bi=ar[i];
                flg=0;
            }
        }
    }
    if(flg==0)
    {
        printf("%d",bi);
    }
        
   return 0;
}