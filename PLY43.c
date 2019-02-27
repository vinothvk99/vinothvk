int main()
{
    int num[50][50],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          scanf("%d",&num[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         if(num[i][j]==1)
         {
             if(num[i][j-1]==0 && num[i-1][j]==0 && num[i][j+1]==0 && num[i+1][j]==0)
             {
                 count++;
             }
         }
      }
    }
    if(num[0][0]==1)
    {
        count++;
    }
    if(num[0][n]==1)
    {
        count++;
    }
    if(num[n][0]==1)
    {
        count++;
    }
    if(num[n][n]==1)
    {
        count++;
    }
    printf("%d" ,count);
    return 0;
}
