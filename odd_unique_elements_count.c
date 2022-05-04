#include<stdio.h>
int uni(int *a,int n,int x)
{
    int i,oc=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            oc++;
        }
    }
        if(oc==1)
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
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(uni(a,n,a[i]))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}