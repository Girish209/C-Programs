/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.*/
#include<stdio.h>
void unique(int a[],int n)
{
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==temp && a[i]!=999)
            a[i]=999;
        else
            temp=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    int k=0;
    printf("[");
    for(k=0;k<n;k++)
    {
        if(a[k]==999)
            break;
        printf("%d,",a[k]);
    }
    printf("],");
    printf("%d",k);
}
void main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    unique(arr,n);
}
