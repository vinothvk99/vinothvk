#include <stdio.h>
int main() 
{
    int NUM,a[1000],i,j,t,x;
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
    if(NUM%2==0)
{
x=(a[NUM-1/2]+(a[NUM/2]))/2;
}
else
{
x=a[NUM/2];
}
printf("%d",x);

return 0;
}