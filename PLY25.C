#include <stdio.h>
#include<string.h>

int main()
{
    char str[1000],w;
 int i,j,c=0,l=0,a[1000];
 scanf("%[^\n]",str);
  for(i=0;str[i]!='\0';i++)
 {
    c=1;
    for(j=i+1;str[j]!='\0';j++)
    {
        if(str[i]!='$'&&str[j]!='$')
        {
        if(str[i]==str[j])
        {
            c++; 
            str[j]='$';
            
         }
      }
    }
    
    if(str[i]!='$')
    {
    if(c>l)
    {
    l=c;
  w=str[i];
  }
  }}
  printf("%c",w);

    return 0;
}
