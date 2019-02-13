#include <stdio.h>
#include<string.h>
int main()
{
  
  char S1[100],X;
   int i,j,l;
   scanf("%s",S1);
   l=strlen(S1);
  
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
        if(S1[i]>S1[j])
        {
            X=S1[i];
            S1[i]=S1[j];
            S1[j]=X;
        }
       }
   }
   printf("%s",S1);
    

	return 0;
}