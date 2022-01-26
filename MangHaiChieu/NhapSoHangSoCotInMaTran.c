#include<stdio.h>
#define MAX 100

int main()
{
    int a[MAX][MAX],i,j,n,m;

    printf("nhap so hang: ");
    scanf("%d",&n);
    printf("nhap so cot: ");
    scanf("%d",&m);

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
                printf("%3d\t ",a[i][j]);
            }
            printf("\n");
        }

}
