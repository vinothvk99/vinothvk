#include <stdio.h>

int main()
{
    char st[10000];
   int i,cunt=0,len;
    scanf("%s",st);
   len=strlen(st);
   for(i=0;st[i]!='\0';i++)
   {
  if(st[i]=='a'||st[i]=='b')
       cunt++;
      }

   if(cunt==len)
     {
      printf("yes");
     }
  else if(cunt==len-1)
     {
     printf("yes");
     }
   else
     {
     printf("no");
     }
    return 0;
}