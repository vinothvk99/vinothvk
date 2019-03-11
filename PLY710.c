#include <stdio.h>
#include<string.h>

int main()
{
    	char arr[1000],brr[10]="Answer",crr[1000];
    	scanf("%s",arr);
    	int i,j,len,temp;
    	temp=0;
    	for(i=0;arr[i]!='\0';i++)
    	{
        crr[temp]=arr[i];
         temp++;
         }  
        for(j=0;brr[j]!='\0';j++)
        {
         crr[temp]=brr[j];
         temp++;
         }
     crr[temp]='\0';
     printf("%s",crr);
    return 0;
}