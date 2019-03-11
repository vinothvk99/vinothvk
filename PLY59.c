#include<stdio.h>

void main()
{
  long NUM;
    scanf("%ld",&NUM);
    if((NUM>=-2,147,483,648 && NUM<=2,147,483,647)||(-32,768 && NUM<= 32,767 ))
    {
      printf("INT");
    }
   else if(NUM>=-2,147,483,648 && NUM <= 2,147,483,647)
    {
         printf("LONG");
    }
   return 0; 
}