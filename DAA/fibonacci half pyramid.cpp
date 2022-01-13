#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s,a=0,b=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            s=a+b;
            a=b;

            printf("%d ",b);
            b=s;
        }
        printf("\n");
    }
}

