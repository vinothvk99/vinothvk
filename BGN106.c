#include <stdio.h>
 
int main() 
{
     int A, B, C, i, tn;
     int sum = 0,f1=0;
 
     scanf("%d %d %d", &A,&B,&C);
    
    
     sum = (C * (2 * A+ (C - 1)* B ))/ 2;
     tn = A + (C - 1) * B;
     for (i = A; i <= tn; i = i + B)
     {
f1=1;
}
if(f1==1)
               printf("%d ", sum);
     

	return 0;
}