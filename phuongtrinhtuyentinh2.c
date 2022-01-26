#include <stdio.h>
#include <conio.h>
#include <math.h>


int i,j,n,m,k;
double x,tam,a[100][100],b[100];
int dem=0;

void nhap();
void xuat();
void giai();

// nhap he pt
void nhap(void)
{
    printf("Nhap n = ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" a[%d][%d] = ",i+1,j+1);
            scanf("%lf",&a[i][j]);
        }
        printf(" b[%d] = ",i+1);
        scanf("%lf",&b[i]);
    }
}

//in
void xuat(void)
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(j==n)
                printf(" %.2lf",i,b[i]);
            else
                printf(" %6.2lf",a[i][j]);
        }
        printf("\n");
    }
}

//----------- GIAI HE PHUONG TRINH ---------------------------------
void giai(void)
{
//Tao ma tran lien ket--------
    for(i=0; i<n; i++)
    {
        a[i][n]=b[i];
    }
//Bat dau thuat toan Gauss-Jordan de giai he phuong trinh.------------
//Dung phep BDSC dua Aij ve ma tran cheo.
    for(j=0; j<n; j++)
    {
        for(i=n-1; i>=j; i--)
        {
            if(a[i][j]==0)
                continue;//Neu phan tu a bang 0 thi tang i.
            if((i>j)&&(a[i][j]!=0))
            {
                k=i-1;
                while((k>=j)&&(a[k][j]==0))
                    k--;//Xet cac phan tu a khac 0 tren cung cot j
                if(k<j)
                {
                    //Doi cho dong thu i va j cho ca ma tran mo rong.
                    for(m=0; m<=n; m++)
                    {
                        tam=a[i][m];
                        a[i][m]=a[j][m];
                        a[j][m]=tam;
                    }
                }
                if((k>=j)&&(k>=0))
                {
                    x=-a[i][j]/a[k][j];
                    //Nhan dong thu k cho x roi cong vao dong thu i.
                    for(m=0; m<=n; m++)
                        a[i][m]+=a[k][m]*x;
                }
            }
        }
    }
    for(j=n-1; j>=0; j--)
    {
        for(i=0; i<=j; i++)
        {
            if(a[i][j]==0)
                continue;
            if((i<j)&&(a[i][j]!=0))
            {
                k=i+1;
                while((k<=j)&&(a[k][j]==0))
                    k++;
                if((k<=j)&&(k<=n))
                {
                    x=-a[i][j]/a[k][j];
                    //Nhan dong thu k voi x roi cong vao dong thu i.
                    for(m=0; m<=n; m++)
                        a[i][m]+=a[k][m]*x;
                }
            }
        }
    }
//Ket thuc qua trinh Gauss.
    for(i=0; i<n; i++)
        if(a[i][i]==0)
        {
            printf("\nHe phuong trinh VSN");
            dem++;
            return;
        }
    for(i=0; i<n; i++)
    {
        b[i]=a[i][n]/a[i][i];
    }
}

//----------------- MAIN ----------------------------------------------
void main()
l
{
    system("cls");
    nhap();
    printf("\nHe phuong trinh vua nhap:\n");
    xuat();
    giai();
    printf("\nNghiem duy nhat cua phuong trinh la:");
    if(dem==0)
    {
        for(i=0; i<n; i++)
        {
            printf("\n x%d = %6.2lf",i+1,b[i]);
        }
    }

}
