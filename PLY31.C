#include <stdio.h>

int main()
{
    int a[50],b[50],i,flag=0,j;
    for (i=0;i<3;i++)
    {
     scanf("%d %d",&a[i],&b[i]);
    }

    if(a[0]==a[1])
    {
     for(i=0;i<3;i++)
     {
      for(j=i+1;j<3;j++) 
      {
          if(a[i]==a[j])
          {
              flag++;
          }
          else
          {
              flag=1;
          }
      }
     }
    }
    else
    {
       for(i=0;i<3;i++)
      {
       for(j=i+1;j<3;j++) 
       {
          if(b[i]==b[j])
          {
              flag++;
          }
          else
          {
              flag=1;
          }
       }
      }  
    }
    if(flag==3)
    {
         printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
