#include<stdio.h>
int main()
{
    int ar,br,flg=1,i,rs;
    scanf("%d %d",&ar,&br);
    if(ar-br<=5)
    {
    for(i=1;i<=ar;i++)
     flg*=i;
    ar=flg;
    flg=1;
    for(i=1;i<=br;i++)
     flg*=i;
    br=flg;
    rs=ar/br;
    printf("%d",rs);
    }
 return 0; 
}