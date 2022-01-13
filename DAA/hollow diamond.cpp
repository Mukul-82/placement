#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        printf("%d",i);
        for(int k=1;k<i;k++)
        {
                printf(" ");
        }

        for(int j=1;j<=i-2;j++)
        {
            printf(" ");
        }
        if(i!=1)
        {
            printf("%d",i);
        }


        printf("\n");
    }
}



