#include <stdio.h>

int main()
{
  char st[100];
    int i,j,len,cunt;
    scanf("%[^\n]s",st);
    
    len=strlen(st);
    for(i=0;i<len;i++)
    {
        cunt=1;
        for(j=i+1;j<len;j++)
        {
            if((st[i]==st[j]) && (st[j]>='a'&& st[j]<='z'))
            {
                st[j]=st[j]-32;
                cunt++;
            }
        }
        if(cunt>1)
        {
            st[i]=st[i]-32;

        }
    }
    printf("%s",st);
	
    return 0;
}