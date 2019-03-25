#include<stdio.h>
int main()
{
int ar1,ar3,ar2=0,i=1,ra,ra1,dem,j=1;
scanf("%d %d",&ar1,&ar3);
dem=ar1*ar3;
while(dem)
{
ra=dem%2;
dem=dem/2;
ar2=ar2+(i*ra);
i=i*10;
}
while(j)
{
ar2=ar2/10;
ra1=ar2%10;
j=j*2;
if(ra1==1)
{
printf("%d",j);
break;
}
}
return 0;
}