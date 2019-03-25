#include<stdio.h>
#include<conio.h>
int main()
{
    char arr[100];
    int cunt=0,count=0,i,sum=0;
    scanf("%s",&arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(ar[i]%2==0)
        {
            cunt++;
        }
        else
        {
            count++;
        }
    }
    if(cunt>0 && count>0)
    {
        sum=cunt*count;
    }
    printf("%d",sum);
    return 0;
}