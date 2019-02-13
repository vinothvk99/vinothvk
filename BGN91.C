#include <stdio.h>

int main()
{
    int a1,b,c,d;
    scanf("%d %d",&a1,&b);
if(a1>b)
{
d=a1-b;
printf("%d",d);
}
else
{
d=b-a1;
printf("%d",d);
}
    return 0;
}