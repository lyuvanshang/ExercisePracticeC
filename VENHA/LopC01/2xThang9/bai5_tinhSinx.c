#include <stdio.h>
#include <math.h>

//pow(x,n) <--> x^n

int main()
{
    int n;
    float tong, x, i,gt;
    printf("nhap x,n: ");
    scanf("%f %d", &x, &n);

    for (i=1,tong=x,gt=1; i<=n; i++)
    {

        gt = gt * (2*i) * (2*i+1);
        tong += pow(-1,i)*pow(x,2*i+1)/gt;
    }
    printf("Sin(%.3f ) = %f rad",x, tong);

    return 0;
}
