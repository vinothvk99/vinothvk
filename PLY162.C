#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,cunt=0,nu1=0,sum;
    scanf("%s",str);
    j=strlen(str);
    for(i=0;i<j;i++)
    {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
        {
            cunt++;
        }
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
        if((str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u')||(str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'))
        {
        nu1++;
        }
        }
    }
    sum=cunt*nu1;
    printf("%d",sum);
}