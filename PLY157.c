#include<stdio.h>
int main()
{
    char sr1[100],sr2[100];
    int i,j=0,ka;
    scanf("%[^\n]s",s1r);
    for(i=0;sr1[i]!='\0';i++)
    {
        if(sr1[i]!=' ')
        {
            sr2[j]=sr1[i];
            j++;
        }
        if(sr1[i]==' ')
        {
            for(ka=j-1;ka>=0;ka--)
            {
                printf("%c",sr2[k]);
                sr2[k]='\0';
            }
            printf(" ");
            j=0;
        }      
    }
    return 0;      
}