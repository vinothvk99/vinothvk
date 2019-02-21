#include <stdio.h>

int main()
{
  char str[50];
  int i,j,k,l;
  scanf("%[^\n]s",str);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]==' ')
      {
         k=i+1;
         j=i;
         for(l=k;str[l]!='\0';l++)
         {
             str[j]=str[l];
             j++;
         }
         str[j]='\0';
      }
  }
  printf("%s",str);
  return 0;
  
}
