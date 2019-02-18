#include <stdio.h>

int main()
{
      int n,i,j,a,c=0;
scanf("%d",&n);

int str[n];
for(i=0;i<n;i++)
{
    scanf("%d",&str[i]);
}

  for(i=0;i<n;i++)
 {
    c=1;
    for(j=i+1;j<n;j++)
    {
        if(str[i]!='*'&&str[j]!='*')
        {
        if(str[i]==str[j])
        {
            c++; 
            str[j]='*';
            
         }
      }
    }
    
    if(str[i]!='*')
    {
    
    if(c==1)
    {
 
  a=str[i];
  }
  }}
  printf("%d",a);
return 0;
}
