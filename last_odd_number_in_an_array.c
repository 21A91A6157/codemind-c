#include<stdio.h>
int main()
{
    int a[100],n,i,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            ind=a[i];
        }
    }
    printf("%d",ind);
}