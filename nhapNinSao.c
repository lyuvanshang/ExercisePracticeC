#include<stdio.h>


int main()
{
    int n;
    printf("nhap n:");
    scanf("%d",&n);

    for (int j=1; j<=n; j++)
    {
        for (int i=1; i<=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
