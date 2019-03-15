#include <stdio.h>

int main()
{
  long NUM,rad,bas=1,binary=0;
   scanf("%ld",&NUM);
   while(NUM)
   {
       rad=NUM%10;
       NUM=NUM/10;
       binary=binary+(rad*bas);
      bas=bas*2;  
   }
   printf("%ld",bin);
    return 0;
}