#include <stdio.h>

int main()
{
  char str[50];
  int i,j,k,l;
  scanf("%[^\n]s",str);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]==' ' && str[i+1]==' ')
      {
         k=i+2;
         j=i;
         for(l=k;str[l]!='\0';l++)
         {
             str[j]=str[l];
             j++;
         }
         str[j]='\0';
         break;
      }
  }
  printf("%s",str);
  return 0;
  
}
