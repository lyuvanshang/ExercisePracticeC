#include<stdio.h>
#include<math.h>

int main()
{

    int n;
    float tong, x, i,gt;
    printf("nhap x,n: ");
    scanf("%f %d", &x, &n);
      for (i=1,tong=1,gt=1; i<=n; i++)
    {

        gt = gt  * i;
        tong = tong+pow(x,i)/gt;
    }
    printf("e^x=%.2f",tong);
}
