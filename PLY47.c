#include<stdio.h>
int main()
{
int num1,num2,nr,i,cunt=0;
scanf("%d",&nr);
for(i=0;i<nr;i++)
{
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        cunt++;
    }
}
printf("%d",cunt);
return 0;
}
