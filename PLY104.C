#include <stdio.h>

int main()
{
    int NUM,ra,i,arr[100],j,temp,count=0;
    scanf("%d",&N);
    while(NUM)
    {
        ra=NUM%10;
        arr[temp]=ra;
        NUM=NUM/10;
        temp++;
    }
    for(i=0;arr[i]!='\0';i++)
    {
        for(j=i+1;arr[j]!='\0';j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }        
        }       
}   
    if(count!=0)
{
    printf("yes");
} 
   else
{
  printf("no");   
}
}