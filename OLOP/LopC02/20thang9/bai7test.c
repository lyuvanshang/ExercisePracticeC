#include <stdio.h>
#include <conio.h>

int main()
{
    float TotalKm;
    float Cost = 0;
    printf("\n Nhap vao so Km: ");
    scanf("%f", &TotalKm);
    if(TotalKm <= 0.8)
    {
        Cost =10000;
    }
    else if(TotalKm <= 30.8 && TotalKm > 0.8)
    {
        Cost = (TotalKm - 0.8)*4000 + 1*5000;
    }
    else
    {
        Cost = 1*5000 + 29*4000 + (TotalKm - 30)*3000;
    }
    printf("\n So tien phai tra: %0.3f VND", Cost);
    getch();
}
