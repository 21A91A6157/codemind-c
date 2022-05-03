#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=n;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum=sum+pow(2,x-1);
        }
        x--;
    }
    printf("%d",sum);
}