#include<stdio.h>
#include<stdbool.h>
int isHappy(int n)
{
    int d,res=0;
    while(n>0)
    {
        d=n%10;
        res=res+(d*d);
        n=n/10;
    }
    return res;
}
void main()
{
    int n,res;
    printf("Enter the number:");
    scanf("%d",&n);
    res=n;
    while(res!=1 && res!=4)
    {
        res=isHappy(res);
    }
    if(res==1)
        printf("The number is Happy");
    if(res==4)
        printf("The number is not Happy");
}
