#include<stdio.h>
void main()
{
    int NUM,con,i,temp=1,count=0;
    scanf("%d%d",&NUM,&con);
    for(i=1;i<=NUM;i++)
    {
       temp=temp*con;
        if(temp==NUM)
        {
            count++;
            break;
        }
        
     }
        if(count==0)
        printf("no");
        else printf("yes");
        
    
}