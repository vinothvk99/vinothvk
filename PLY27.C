#include <stdio.h>

int main()
{
    int l1,r1,i;
scanf("%d %d",&l1,&r1);
if((l1>=1&&l1<=100000)&&(r1>=1&&r1<=100000))
{

for(i=1;;i++)
{
    if(i%l1==0&&i%r1==0)
    {
        
        printf("%d",i);
        break;
    }
    
}
}

    return 0;
}
