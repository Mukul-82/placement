#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k=n;
    scanf("%d",&n);
    for(int i=n/2;i>=0;i--)
    {
        for(int j=n/2;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=n/2;j>i;j--)
        {

            printf("%d",j);
        }
        printf("\n");
    }
}

