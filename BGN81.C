#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    int i, l;
    int f = 0;
    scanf("%s", str1);
    
    l = strlen(str1);
    
    for(i=0;i < l ;i++){
        if(str1[i] != str1[l-i-1]){
            f= 1;
            break;
   }
}
    
    if (f==0) {
        printf(" yes");
    }    
    else {
        printf("no");
    }
    return 0;
}