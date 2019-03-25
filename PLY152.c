#include <stdio.h>
#include <string.h>
int main()
{
    char a[r100][100],br[100],br1[1000];
    int i,j,num,len,ka,ma,cunt=0,tem=0;
    scanf("%d %d",&num,&ka);
    for(i=0;i<num;i++)
    {
        scanf("%s",ar[i]);
    }
    for(i=0;i<num;i++)
    {
        strcpy(br,ar[i]);
        strcpy(br1,ar[i+1]);
        len=strlen(br);
        ma=strlen(br1);
        if(len==ma)
        {
            cunt=0;
        for(j=0;j<len;j++)
        {
            if(br[j]==br1[j])
            {
                cunt++;
            }
        }
        if(cunt==l)
        {
            tem++;
            if(tem==ka-1)
            {
                break;
            }
        }
        else
        {
            tem=0;
        }
        }
    }
    if(tem==ka-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}