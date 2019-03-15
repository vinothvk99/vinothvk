#include <stdio.h>
#include<math.h>

int main()
{
   int NUM,MUM,arr[100],brr[100],crr[100],i,j,temp=0,flag;
   scanf("%d %d",&NUM,&MUM);
 for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
       crr[temp]=arr[i];
       temp++;
   }
      for(i=0;i<MUM;i++)
   {
       scanf("%d",&brr[i]);
       crr[temp]=brr[i];
       temp++;
   }
       for(i=0;i<temp;i++)
   {
   for(j=i+1;j<temp;j++)
   {
   if(crr[i]>crr[j])
   {
       flag=crr[i];
       crr[i]=crr[j];
       crr[j]=flag;   
   }
   }
   }
        for(i=0;i<temp;i++)
   {
       printf("%d ",crr[i]);
   }
    return 0;
}
