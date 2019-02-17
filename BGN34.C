#include <stdio.h>
int main() 
{
    int NUM,a1[1000],i,j,t;
    scanf("%d",&NUM);
    for(i=0;i<NUM;i++)
    {
        scanf("%d",&a1[i]);
    }
    
    for(i=0;i<NUM;i++)
    {
        for(j=i;j<NUM;j++)
        {
        if(a1[i]>a1[j])
    {
        t=a1[i];
        a1[i]=a1[j];
        a1[j]=t;
    }}}
    for(i=0;i<NUM;i++)
    {
        printf("%d ",a1[i]);
    }
return 0;
}
