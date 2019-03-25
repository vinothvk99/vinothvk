#include <stdio.h>
void  main() 
{
    int ar[100],nu,br[100],len,tem,j=0,i;
    scanf("%d",&nu);
    for(i=0;i<nu;i++)
    {
        scanf("%d",&ar[i]);
    }
    tem=nu;
    if(tem%2==0)
    {
        tem=tem/2;
    }
    else
    {
        tem=(tem-1)/2;
    }
    for(i=tem-1en;i>=0;i--)
    {
        br[j]=ar[i];
        j++;
    }
    for(i=nu-1en;i>=tem;i--)
    {
        br[j]=ar[i];
        j++;
    }
    for(i=0;i<nu;i++)
    {
        printf("%d ",br[i]);
    }

}