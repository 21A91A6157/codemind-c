#include<stdio.h>
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(a[i+2]%2==0&&a[i]%2==0)
        {
            if(a[i+1]%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}