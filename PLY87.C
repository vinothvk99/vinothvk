#include <stdio.h>
void main() 
{
	int NUM,arr[100],i,count=1,temp=0;
	scanf("%d",&NUM);
	for(i=0;i<NUM;i++)
               {
		scanf("%d",&arr[i]);
                } 
	for(i=1;i<NUM;i++)
	{
		  if(arr[i-1]<arr[i])
		    {
		        count++;
		    }
		    else
		    {
		        if(temp<count)
		        {
		            temp=count;
		        }
		        count=1;
		    }
		}
		if(count>temp)
			    {
                               printf("%d",count);
                             }  
		else
                 {
	            printf("%d",temp);
                 }
	}