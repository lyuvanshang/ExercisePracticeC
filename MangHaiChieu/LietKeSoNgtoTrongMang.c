#include<stdio.h>
#define Max 100

int main()
{
    int a[Max][Max],i,j,m,n,max,min;



    printf("nhap cot: ");
    scanf("%d",&m);
    printf("nhap hang: ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);

        }

    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");

    }

}
