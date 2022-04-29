#include<stdio.h>
int main()
{
    int v,i,d,c=0,t;
    scanf("%d",&v);
    t=v;
    while(v)
    {
        d=v%10;
        c=c+d;
        v=v/10;
    }
    if(t%c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}