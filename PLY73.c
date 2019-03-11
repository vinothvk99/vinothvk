#include <stdio.h>

int main()
{
int NUM,Arr[500],Brr[500],i,j,cunt=0;
scanf("%d",&NUM);
for(i=0;i<NUM;i++)
{
    scanf("%d",&Arr[i]);
}

for(i=0;i<NUM;i++)
{
    scanf("%d",&Brr[i]);
}
 for(i=0;i<NUM;i++)
 {
     for(j=0;j<NUM;j++)
 { 
    if(Arr[i]==Brr[j])
     {
     break;   
     }   
 }
 if(cunt!=1)
 { printf("%d ",Arr[i]); }
 }
 return 0; 
}