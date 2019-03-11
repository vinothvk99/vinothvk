#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000
int count(char * str, char * str1);
int main()
{
    char string[MAX_SIZE];
    char string1[MAX_SIZE];
    int cunt; 
    scanf("$[^\n]s",string);
    scanf("$[^\n]s",string1);
    cunt = count(string, string1);
    printf("%d",cunt);
    return 0;
}
int count(char * stri, char * stri1)
{
    int i, j, flag, cunt;
    int len, len1;
   len = strlen(stri);     
   len1 = strlen(stri1);
    cunt = 0;
    for(i=0; i <= len-len1; i++)
   {
        flag= 1;
        for(j=0; j<len1; j++)
        {
            if(stri[i + j] != stri1[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cunt++;
        }
    }
    return cunt;
}