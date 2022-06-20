#include<stdio.h>
int pal(int n)
{
    int temp=n,res=0,d;
    while(n)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
    if(temp==res)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(pal(a[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}