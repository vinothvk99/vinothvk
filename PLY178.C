#include <stdio.h>

int main()
{
      char st[100];
    int i,bi=0;
    scanf("%s",st);
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]>='0' && st[i]<='9')
        {
            bi=st[i]-48;
            while(bi)
            {
                printf("%c",st[i-1]);
                bi--;
            }
        }
    }
        
   return 0;
}