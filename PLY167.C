#include<stdio.h>
int main()
{
    int num1,num2,re,i,j=0,nu[100],po,num;
    scanf("%d %d",&num1,&num2);
    num=num1*num2;
    while(num)
    {
        re=num%2;
        nu[j]=re;
        j++;
        num=num/2;
    }
    for(i=0;i<j;i++)
    {
        if(nu[i]==1)
        {
            po=i;
            break;
        }
    }
    printf("%d",po+1);
    return 0;
}