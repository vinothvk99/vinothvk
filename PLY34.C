#include <stdio.h>

int main()
{
    char str[50];
    int i,flag=0;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
      {
          flag=1;
      }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
