#include <stdio.h>

int main()
{
  long NUM,rad,bas=1,binary=0;
   scanf("%ld",&NUM);
   while(NUM)
   {   
       rad=NUM%2;
       NUM=NUM/2;
       binary=binary+(rad*bas);
      bas=bas*10; 
   }
   printf("%ld",binary);
    return 0;
}