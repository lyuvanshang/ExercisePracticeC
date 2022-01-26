#include<stdio.h>

int main()
{

    int i,j,n,m,k,diem;
    double x,tg,a[100][100],b[100];
    diem=0;

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
      for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(j==n)
                printf("%7.2lf",b[i]);
            else
                printf("%7.2lf",a[i][j]);
        }
        printf("\n");
    }
    //Tao ma tran lien ket
 for(i=0; i<n; i++)
    {
        a[i][n]=b[i];
    }
     for(j=0; j<n; j++)
    {
        for(i=0; i<=n; i++)
        {
            if(a[i][j]==0)
                {
                continue;//Neu phan tu a bang 0 thi tang i.
            }
            if((i>j)&&(a[i][j]!=0))
            {
                k=i+1;
                while((k>=j)&&(a[k][j]==0))
                    k++;//Xet cac phan tu a khac 0 tren cung cot j
                if(k<j)
                {
                    //Doi cho dong thu i va j cho ca ma tran
                    for(m=0; m<=n; m++)
                    {
                        tg=a[i][m];
                        a[i][m]=a[j][m];
                        a[j][m]=tg;
                    }
                }
                if((k>=j)&&(k>=0))
                {
                    x=-a[i][j]/a[k][j];
                    //Nhan dong thu k cho x roi cong vao dong thu i bien doi ve 0
                    for(m=0; m<=n; m++)
                        a[i][m]+=a[k][m]*x;
                }
            }

        }
}
   for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(j==n)
                printf("%7.2lf",b[i]);
            else
                printf("%7.2lf",a[i][j]);
        }
        printf("\n");
    }
}
