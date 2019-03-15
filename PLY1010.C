#include <stdio.h>
 
int main()
{
    long int num,binary=0,bas=1,ra;
    scanf("%ld", &num);
    while (num != 0)
    {
        ra = num % 10;
        binary= binary+ ra* bas;
        bas = bas * 2;
        num= num/ 10;
    }
    printf(" %lX",binary);
    return 0;
}