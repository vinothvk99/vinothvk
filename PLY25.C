   
#include <stdio.h>

int main()
{
  int NUM,i,len,q=0,arr[10],min,j,temp;
  char a[10][10];
  scanf("%d",&NUM);
  for(i=0;i<NUM;i++)
  {
      scanf("%s",&a[i]);   
  }
   for(i=0;i<NUM;i++)
  {   
len=strlen(a[i]);   
 arr[q]=len;
      q++;
  }
   for(i=0;i<NUM;i++)
  {
  for(j=i+1;j<NUM;j++)
   {
       if(arr[i]>arr[j])
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;   
       }    
   }
  }
  for(i=0;i<NUM;i++)
  {    
      for(j=0;j<NUM;j++)
      {
          
          if(arr[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }
  }
return 0;
}
