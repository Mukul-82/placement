#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=(n/2)+1;i++)
    {
        for(int j=i;j<(n/2)+1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n/2;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=n/2;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}




