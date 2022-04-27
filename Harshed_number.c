#include<stdio.h>
int main()
{
    int n,temp,sum=0,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    if(temp%sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}