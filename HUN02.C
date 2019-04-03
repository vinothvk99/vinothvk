#include <stdio.h>

int main()
{
    int a[50],num,count=0,po=10,temp;
    long int n=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=num-1;i>=0;i--)
    {
      n=n*po+a[i];
    }
    printf("%ld ",n);

    return 0;
}
