#include <stdio.h>

int main()
{

int num,cnstnt,r,cunt=0;
scanf("%d %d",&num,&cnstnt);


while(num)

{
    
    
    r=num%10;
    
    if(r==cnstnt)
    {
        cunt++;
    }
    num=num/10;
    
    
}
printf("%d",cunt);
return 0;
}
