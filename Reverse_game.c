#include<stdio.h>
int pal(int n)
{
    int res=0,d,temp=n;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    return res;
}
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        c=(pal(a[i]));
        printf("%d ",c);
    }
}