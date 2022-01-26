#include<stdio.h>



void matran()
{
    int i,j,a[100][100],b[100][100],c[100][100];
    int h1,c1,h2,c2;

    printf("\n Nhap so hang cua a[100][100]");
    scanf("%d",&h1);
    printf("\n Nhap so cot cua a[100][100]");
    scanf("%d",&c1);


     printf("\n Nhap so hang cua b[100][100]");
    scanf("%d",&h2);
    printf("\n Nhap so cot cua b[100][100]");
    scanf("%d",&c2);

    if (h1!=h2 || c1!=c2)
    {
        printf("D cong duoc");
        return;

    }
    printf(" Nhap ma tran a\n");
    for (i=0;i<h1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("nhap phan tu a[%d][%d] : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
        printf(" Nhap ma tran a\n");
    for (i=0;i<h2;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("nhap phan tu b[%d][%d] : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0;i<h1;i++)
    {
        for (j=0;j<c1;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
    }

    for (i= 0; i< h1; i++)
    {
        for (j=0; j< c1;j++)
        {
            printf("%d\t", c[i][j]);

        }
        printf("\n");
    }


}
int main()
{

}
