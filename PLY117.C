#include<string.h>

int main()
{
    char str[100],xtr[1000],ctr[1000];
    int i,j,k=0,num=0,l=0,len,d=0;
    gets(str);
    gets(xtr);
    len=strlen(xtr);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
           ctr[k]=str[i]; 
           k++;
        }
        if(str[i]==' ')
        {
            d++;
            for(j=0;j<k;j++)
            {
                if(ctr[j]==xtr[l])
                {
                    num++;
                }
                l++;
            }
            for(j=0;j<k;j++)
            {
                ctr[j]='\0';
                num=0;
                l=0;
            }
        }
    }
    num=0;
    l=0;
        for(j=0;j<k;j++)
            {
                if(c[j]==x[l])
                {
                    num++;
                    l++;
                }
            }
            if(len==num)
            {
                d++;
            }          
    printf("%d",d);
    return 0;
}