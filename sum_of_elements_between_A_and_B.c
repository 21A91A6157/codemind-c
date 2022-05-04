#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}