#include<stdio.h>
int main()
{
    char s[100];
    int i,x=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117 || s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85)
        {
            x++;
        }
    }
    if(x==0)
    {
        printf("0");
    }
    else
    {
        printf("%d",x);
    }
}