#include <stdio.h>
#include<string.h>

int main()
{
   char m[100000],n[100000];
    int i,l,l1,c=0,k=0,f=0;
    scanf("%s %s",m,n);
    l=strlen(m);
    l1=strlen(n);
    if(l==l1)
    {
        for(i=0;i<l-1;i++)
        {
       
       for(int j=i+1;j<l;j++)
       
       {
            if(m[i]==m[j])     
            {
             c++;
            }
            if(n[i]==n[j])
            {
                k++;
            }
            if(c==k)
            {
                f=1;
            }
            else
            {
                f=0;
            }

            }
        }
                if(f==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    

    return 0;
}
