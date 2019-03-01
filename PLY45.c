#include <stdio.h>

int main()
{
char str[100000];
 int i,j,count=0;
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {count=0;
    for(j=i+1;str[j]!='\0';j++)
    {
        if(str[i]!='#'&&str[i]!='#')
        {
        if(str[i]==str[j])
        {
           count++;
           str[j]='#';
            
        }
    }}
     
     if(count==0&&str[i]!='#')
    {
     printf("%c ",str[i]);
    }
 }
return 0; 
}
