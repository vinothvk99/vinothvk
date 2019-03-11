#include <stdio.h>

int main(void) {


int NUM,i,count=0;
scanf("%d",&NUM);
if(NUM>=1 && NUM <=100000)
{
for(i=NUM-1;i>1;i--)
{
    if(NUM%i==0)
    {
     count++;   
    }   
}
if(count!=0)
printf("yes");
else
printf("no");
}
return 0;
}