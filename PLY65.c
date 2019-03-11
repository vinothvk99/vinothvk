#include <stdio.h>
#include<string.h>
int main()
{  
 char stri[5000],stri1[5000];
 int i,count=0,len,len1;
 scanf("%s",stri);
 scanf("%s",stri1);
 len=strlen(stri1);
 len1=strlen(stri);
 for(i=0;s[i]!='\0';i++)
 {
  if(stri[i]>='a' && stri[i]<='z')
	{ stri[i]=stri[i]-32; }
 }
  for(i=0;stri1[i]!='\0';i++)
 { 
   if(stri1[i]>='a'&& stri1[i]<='z')
      {
       stri1[i]=stri1[i]-32;
      }
 }    
if(len==len1)
{ 
    for(i=0;stri[i]!='\0';i++)
     {
      if(stri[i]==stri1[i])
         count++;
     }
     if(count==len)  
       { printf("yes"); }
     else
       { printf("no"); }
    return 0;
 }
else
  printf("no");
}