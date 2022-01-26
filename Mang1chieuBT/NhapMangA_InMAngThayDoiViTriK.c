#include<stdio.h>


int main()
{
    int a[100],n,i,k;
    printf("nhap n:");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("moi ban nhap k: ");
    scanf("%d",&k);

    while (k>=n||k<0)
    {
        printf("nhap lai k:");
        scanf("%d",&k);
    }
    i=k;



    printf("a[%d]= ",i);
    scanf("%d",&a[i]);

    for (i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }




}
