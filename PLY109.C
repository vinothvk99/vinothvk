#include <stdio.h>
 int main()
{
long NUM,ra,binary=0,bas=1;
 scanf("%ld",&NUM);
 while(NUM)
 {
     ra=NUM%10;
     NUM=NUM/10;
     binary=binary+(ra*bas);
     bas=bas*2;
 }
 printf("%lo",binary);
}
