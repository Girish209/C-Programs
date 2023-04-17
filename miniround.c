#include <stdio.h>
#include <stdlib.h>
void numm(int a[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("[%d,%d]\n",i,j);
            }
        }

    }
}
int main()
{
    int n;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n],tar;
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target sum:");
    scanf("%d",&tar);
    numm(arr,n,tar);
    return 0;
}

