#include<stdio.h>
int main()
{
    int a[100],i,c=0,j,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(c==1)
                { 
                    if(a[i]%2==0)
                    {
                        sum+=a[i];
                    }
                }
                if(j>i)
                a[j]=0;
            }
        }
        
    }
    printf("%d",sum);
    return 0;
}