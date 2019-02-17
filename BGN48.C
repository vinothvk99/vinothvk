#include <stdio.h>
int main()
{
int a1,b,t;
scanf("%d %d",&a1,&b);
    a1=a1^b;
    b=a1^b;
    a1=a1^b;
    printf("%d %d",a1,b);
return 0;
}