#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int i,j,cunt1=0,len2,cunt2=0,len1;
    scanf("%s %s",str1,str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;str1[i]!=NULL;i++)
    {
        for(j=0;str2[j]!=NULL;j++)
        {
            if(str1[i]==str2[j])
            {
                cunt1++;
                break;
            }
        }
    }
     for(i=0;str2[i]!=NULL;i++)
    {
        for(j=0;str1[j]!=NULL;j++)
        {
            if(str2[i]==str1[j])
            {
                cunt2++;
                break;
            }
        }
    }
    if(cunt1==len1 && cunt2==len2)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}