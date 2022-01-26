#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct SinhVien
{
    char hoTen[10];
    char gioiTinh[5];
    int namSinh;
}SV;

void nhapSinhVien(SV &sv)
{
    printf("Nhap ten: ");
    fflush(stdin);
    gets(sv.hoTen);
    printf("Nhap gioi tinh: ");
    gets(sv.gioiTinh);
    printf("Nhap nam sinh: ");
    scanf("%d",&sv.namSinh);
}
void nhapSinhVien(SV a[], int n)
{
    for (int i = 1; i<=n; i++)
    {
        printf("Nhap sinh vien thu %d\n: ",i);
        nhapSinhVien(a[i]);
    }
}
void xuatSinhVien(Sv &sv)
{
    printf("Ten: %s", sv.hoTen);
}
