#include<stdio.h>
int main()
{
    int n,temp,res=0,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    if(res==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}