#include<stdio.h> 
int main()
{
    int a[50],len[50],lp[50],fp[50],num,i,j,count=0,k=0,lpo,fpo;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            count++;
            fpo=i;
            for(j=i+1;j<num;j++)
            {
                if(a[j]%2==0)
                {
                    count++;
                    lpo=j;
                }
                else
                {
                    break;
                }
            }
            if(count<1)
            {
                len[k]=count;
                fp[k]=fpo;
                lp[k]=lpo;
                k++;
            }
             count=0;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d %d %d\n",fp[i],lp[i],len[i]);
    }
    return 0;
}
