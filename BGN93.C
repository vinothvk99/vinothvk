#include <stdio.h>
#include<string.h>
int main()
{
     int NUM,M;
   char ch;

       scanf("%d %c %d",&NUM,&ch,&M);
       if(ch=='/')
       {
           printf("%d\n",(NUM/M));
       }
       else
       {
           printf("%d\n",(NUM%M));
       }

	return 0;
}