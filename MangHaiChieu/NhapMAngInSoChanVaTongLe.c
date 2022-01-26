#include<stdio.h>

#define Max 100

int main()
{
    int a[Max][Max],i,j,m,n,tongle,k;
    tongle=0;


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
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (a[i][j]%2==0)
            {
                k=a[i][j];
                printf("%d\t",k);
            }
            else
            {
                tongle=a[i][j]+tongle;
            }

        }

    }
    printf("\n");


    printf("tpng la: %d",tongle);
}
