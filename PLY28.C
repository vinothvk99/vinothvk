
#include <stdio.h>

int main()
{
char ch[6]={'k','a','b','a','l','i'};
   char a[20][20];
   int i,j,k,c=0,N,t=0,l;

  scanf("%d",&N);
 
   for(i=0;i<N;i++)
   {
        scanf("%s",a[i]);
    }

  for(i=0;i<N;i++)
  {
      l=strlen(a[i]);
   
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<6;k++)
          {
            if(a[i][j]==ch[k])
            {
              ++c;
          
              break;
            }
          }
      }
      
      if(c==l&& l==6)
      {
          t++;
            

      }
      c=0;
      l=0;
  }
  
  
  printf("%d",t);

   

    return 0;
}
