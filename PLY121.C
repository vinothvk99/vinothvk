#include <stdio.h>

int main()
{
   int NUM,arr[100],t,i,j,brr[100],prr[100],temp=0,count=0,swap;
   scanf("%d %d",&NUM,&t);
   for(i=0;i<NUM;i++)
   {
       scanf("%d",&arr[i]);
   }
      for(i=0;i<t;i++)
   {
       scanf("%d",&brr[i]);
   }
   for(i=0;i<NUM;i++)
   {
      count=0; 
       for(j=0;j<t;j++)
       {
                 if(brr[i]!='$' && brr[j]!='$')
                 {
           if(arr[i]==brr[j])
           {
             count++;
             brr[j]='$'; 
           }  
           }
       }
     if(count!=0)
           {
             prr[temp]=arr[i];
             temp++;   
           }
   }
    for(i=0;i<temp;i++)
   {   
   for(j=i+1;j<temp;j++)
   {
     if(prr[i]!='$' && prr[j]!='$')
       {    
         if(prr[i]>prr[j])
         {
         swap=prr[i];
         prr[i]=prr[j];
         prr[j]=swap;
}
}
}
}
for(i=0;i<temp;i++)
   {
    printf("%d ",prr[i]);
   }
    return 0;
}