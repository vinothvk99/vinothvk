#include <stdio.h>
int main()
{
   int ar[100],num,i;
   scanf("%d",&num);
   for(i=0;i<num;i++)
{
    scanf("%d",&ar[i]);
}

for(i=1;i<num;i++)
{ 
if((ar[i]%ar[i-1])==0)
{
    printf("%d ",ar[i]);
}
}
    return 0;
}