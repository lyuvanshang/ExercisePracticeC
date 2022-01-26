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
    printf("\n");
    printf(" cac so chinh phuong la:");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (sqrt(a[i][j])==(int)sqrt(a[i][j])&&a[i][j]>1)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("khong co nhe");
            }
        }

}
}
