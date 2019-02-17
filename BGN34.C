#include <stdio.h>
int main() 
{
    int NUM,a[1000],i,j,t;
    scanf("%d",&NUM);
    for(i=0;i<NUM;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<NUM;i++)
    {
        for(j=i;j<NUM;j++)
        {
        if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }}}
    for(i=0;i<NUM;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}