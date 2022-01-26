#include <stdio.h>

int main()
{
    float a,b,tong,hieu,tich,thuong;

    printf("nhap a=");
    scanf("%f",&a);
    printf("nhap b=");
    scanf("%f",&b);

    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;

    printf("tong=%f\nhieu=%f\ntich=%f\nthuong=%f",tong,hieu,tich,thuong);

    return 0;


}
