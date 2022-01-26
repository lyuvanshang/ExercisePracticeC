#include<stdio.h>
int main()
{
    int a;
    printf("Nhap vao so sung hien co tren dau Huy:");
    scanf("%d",&a);
    if(0<a&&a<10)
    {
        printf("So tien nhan neu ban cho Hieu het so sung:%d dong",a*5000);
    }
    if(9<a&&a<20)
    {
        printf("So tien nhan neu ban cho Hieu het so sung:%d dong",a*7000);
    }
    if(19<a&&a<30)
    {
        printf("So tien nhan neu ban cho Hieu het so sung:%d dong",a*10000);
    }
    if(29<a)
    {
        printf("So tien nhan neu ban cho Hieu het so sung:%d dong",a*15000);
    }
}
