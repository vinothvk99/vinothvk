#include <stdio.h>

int main(){
    int NUM[10];
    int i,min;
    for(i=0;i<10;i++)
    {
    scanf("%d",&NUM[i]);
    }
    min=NUM[0];
    for(i=0;i<10;i++)
    {
    if(min>NUM[i])
    {
        min=NUM[i];
    }
    }
    printf("%d",min);
    return 0;
}