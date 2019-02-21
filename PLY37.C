#include <stdio.h>

int main()
{
  char str[50];
  int i,j,k,l;
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]>='a' && str[i]<='z')
      {
          k=str[i];
          printf("%c",k-32);
      }
      else if(str[i]>='A' && str[i]<='Z')
      {
          k=str[i];
          printf("%c",k+32);
      }
  }
  return 0;
  
}
