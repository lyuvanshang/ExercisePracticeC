#include<stdio.h>
#include<math.h>

int main()
{

    int n,i,k;
    printf("nhap n:");
    scanf("%d",&n);
    k=1;

    for (i=1; i<=n; i++)
    {
        k=k*i;
    }

    printf("k=%d",k);
}
