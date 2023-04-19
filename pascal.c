#include<stdio.h>
void main()
{
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int pascal[n][n];
    for(int i=0;i<n;i++)
    {
        pascal[i][0]=1;
    }
    for(int i=1;i<n;i++)
    {
        pascal[i][n-(n-i)]=1;
    }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<(n-(n-i));j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("[");
        for(int j=0;j<(n-(n-i)+1);j++)
        {
            printf("%d ",pascal[i][j]);
        }
        printf("]");
    }
}
