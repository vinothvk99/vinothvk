#include <stdio.h>

int main()
{
     int ar[100],Num,i,Ka,flg=0;
    scanf("%d %d",&Num,&Ka);
    for(i=0;i<Num;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<Num;i++)
    {
       
            if(ar[i]==Ka)
            {
                flg=1;
            }
        
    }
    if(flg==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
        
   return 0;
}