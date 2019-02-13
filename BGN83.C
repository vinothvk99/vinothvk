#include <stdio.h>
#include <math.h>

int main(){
    int NUM,L,R,f=0,i;
    scanf("%d",&NUM);
    scanf("%d %d",&L,&R);
    for(i=L+1;i<R;i++)
{
if(i==NUM)
{
    f=1;
break;
}
}
if (f==1) {
        printf("yes");
    }    
    else {
        printf("no");
    }
    return 0;
}