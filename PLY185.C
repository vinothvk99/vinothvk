#include <stdio.h>

int main()
{
    char sum1[100],sum2[100],sum3[100];
    scanf("%s %s",sum1,sum2);
    int len,i,j,len1,len2,ka=0,flg;
    len1=strlen(s1);
    len2=strlen(s2);
    len=len1+len2;
    
        for(i=0;sum1[i]!=NULL;i++)
    {
    sum3[k]=sum1[i];
    ka++;
    }
    for(i=0;sum2[i]!=NULL;i++)
    {
        sum3[k]=sum2[i];
    ka++;
    }
    if(len==26)
    {
    
    for(int i=0;i<len;i++)
			{
				if(sum3[i]>='A' && sum3[i]<='Z')
				{
					flg=1;
				}
				else
				{
					flg=0;
					break;
				}
			}
			if(flg!=1)
			{
				printf("not complementary");
			}
			else
			{
			printf("complementary");
			}
		}
		else
		{
			printf("not complementary");
		}
    
    
    return 0;
}