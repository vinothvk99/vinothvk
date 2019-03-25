#include <stdio.h>
int main()
{
    char st[100];
    int num,i,j,cunt=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%s",&st[i]);
    }
    for(i=0;i<num;i++)
    {
        cunt=0;
        for(j=i+1;j<num;j++)
        {
            if(st[i]==st[j])
            {
                cunt++;
            }
        }
        if(cunt==2)
        {
            printf("yes");
            break;
        }
                   
    }
    if(cunt==0)
    {
        printf("no");
    }

    return 0;
}