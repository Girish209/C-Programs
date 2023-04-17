#include<stdio.h>
#include<stdlib.h>
#include<String.h>
void romanToInt(char s[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int g[i];
        if(s[i]=='I')
            g[i]=1;
        else if(s[i]=='V')
            g[i]=5;
        else if(s[i]=='X')
            g[i]=10;
        else if(s[i]=='L')
            g[i]=50;
        else if(s[i]=='C')
            g[i]=100;
        else if(s[i]=='D')
            g[i]=500;
        else if(s[i]=='M')
            g[i]==1000;
        else
            printf("Invalid...");
        sum=sum+g[i];
    }
    printf("The equivalent integer number is:%d",sum);
}
int main()
{
    char s[10];
    printf("Enter the Roman number:");
    scanf("%s",s);
    int n=strlen(s);
    romanToInt(s,n);
}
