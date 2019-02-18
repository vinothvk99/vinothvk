#include <stdio.h>

int main()
{
    int n,i,j,T=0;
scanf("%d",&n);

if(n>=2&&n<=100000)
{
for(i=2;i<=n;i++)
{
  if(n%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                T=1;
                break;
                
            }
        }
if(T==0)
     printf("%d ",i);
}}
}
    return 0;
}
