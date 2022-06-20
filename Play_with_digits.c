#include<stdio.h>
int digit(int n)
{
    int d,sum=0;
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int a[100],n,i,x=0,res=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        res=digit(x);
        sum1+=res;
    }
    printf("%d",sum1);
    
}