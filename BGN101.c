#include <stdio.h>
#include<math.h>

int main()
{
   int LE,BE,HE,volU,tot,area;
   scanf("%d %d %d",&LE,&BE,&HE);
   tot=LE*BE + BE*HE + HE*LE;
   area=2*tot;
   volU=LE*BE*HE;
   printf("%d %d",area,volU);
   

    return 0;
}