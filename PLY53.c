#include<stdio.h>
 
void main()
{
    char arr[100000], arr1[100];
    int count = 0, count1 = 0, i, j, flag;
    gets(arr);
    gets(arr1);
    count=strlen(arr);
    count1=strlen(arr1);
    for (i = 0; i <= count - count1; i++)
    {
        for (j = i; j < i + count1; j++)
        {
            flag = 1;
            if (arr[j] != arr1[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("yes");
    else
        printf("no");
}