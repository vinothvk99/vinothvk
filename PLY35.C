#include <stdio.h>

int main()
{
    char str[50],str1[50],str2[50];
    int count,count1,count2,i;
    scanf("%s",str);
    scanf("%s",str1);
    scanf("%s",str2);
    count=strlen(str);
    count1=strlen(str1);
    count2=strlen(str2);
   for(i=0;i<3;i++)
   {
       if(count>count1)
       {
           printf("%s ",str);
           count=0;
       }
       else if(count1>count2)
       {
           printf("%s ",str1);
           count1=0;
       }
       else
       {
            printf("%s ",str2);
           count2=0;
       }
   }
    

    return 0;
}
