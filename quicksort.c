#include <stdio.h>

int quick();
int part();
int main()
{
    int a[50],min,i,j,n,k,temp;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    int part(int l , int h)
   {
    int i,j,pivot,temp;
    i=l;
    j=h;
    pivot=a[l];
    while(i<j)
    {
        do{
            i++;
          }while(a[i]<pivot);
          
        do{
            j--;
          }while(a[j]>pivot);
          
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            for(k=0;k<n;k++)
          {
           printf("%d ",a[k]);
          }
          printf("\n");
        }
    }
     temp=a[l];
     a[l]=a[j];
     a[j]=temp;
    return j;
   }
  

   void quick(int l,int h)
   { 
    int j;
    if(l<h)
    {
        j=part(l,h);
        quick(l,j);
        quick(j+1,h);
    }
   }
   
   quick(0,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}