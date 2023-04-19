#include<stdio.h>
int profit(int *prices,int pricesSize)
{
    int min=prices[0],pos=1,profit;
    int max=min;
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
            pos=i+1;
        }
    }
    if(pos==pricesSize)
        max=0;
    else
    {
        for(int i=pos;i<pricesSize;i++)
        {
            if(prices[i]>max)
            {
                max=prices[i];
            }
        }
    }
    if(max>min)
        profit=max-min;
    else
        profit=-1;
    return profit;
}
void main()
{
    int n,res;
    printf("Enter the no. of days:");
    scanf("%d",&n);
    int prices[n];
    printf("Enter the price of days:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }
    res=profit(prices,n);
    printf("The maximum profit is:%d",res);
}
