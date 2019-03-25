#include <stdio.h>
int main()
{
int num,temp,i,cunt=0,ar[100];
scanf("%d %d",&num,&temp);
for(i=0;i<num;i++)
{
    scanf("%d",&ar[i]);
}
for(i=0;i<num;i++)
{
    if(ar[i]==temp)
    {
       cunt++;
    }
}
if(cunt!=0) 
  printf("yes %d",cunt);
else
  printf("no");
  return 0;
}