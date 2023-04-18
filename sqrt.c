#include<stdio.h>
float sqrt(int n)
{
    int start=0,end=n,mid;
    float ans;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*mid ==n)
        {
           ans=mid;
            break;
        }
        if(mid*mid<n){
            ans=start;
            start=mid+1;
        }
        else{
           end=mid-1;
        }

    }
    float incr=0.1;
    for(int i=0;i<3;i++)
    {
        while(ans*ans<=n)
        {
            ans+=incr;
        }
        ans=ans-incr;
        incr=incr/10;
    }
    return ans;
}
void main()
{
    int n=9;
    float res=sqrt(n);
    printf("%f",res);
}
