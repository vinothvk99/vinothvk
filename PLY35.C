#include <stdio.h>

int main()
{
  int NUM,i,len,k=0,z[10],m,j,t;
  char a[10][10];
  scanf("%d",&NUM);
  for(i=0;i<NUM;i++)
  {
      scanf("%s",&a[i]);   
  }
   for(i=0;i<NUM;i++)
  {
len=strlen(a[i]);   
 z[k]=len;
      k++;
  }
   for(i=0;i<NUM;i++)
  {
  for(j=i+1;j<NUM;j++)
   {
       if(z[i]>z[j])
       {
           t=z[i];
           z[i]=z[j];
           z[j]=t;   
       }     
   }
  }
  for(i=0;i<NUM;i++)
  {
      for(j=0;j<NUM;j++)
      {       
          if(z[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }
  }
  
  
  return 0;
}
