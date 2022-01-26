#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct SinhVien
{
    char hoTen[30];
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
        printf("Nhap sinh vien thu %d\n",i);
        nhapSinhVien(a[i]);
    }
}
void xuatSinhVien(SV &sv)
{
    printf("Ten: %s\n", sv.hoTen);
    printf("Gioi Tinh: %s\n",sv.gioiTinh);
    printf("NamSinh: %d\n",sv.namSinh);

}
void xuatSinhVien(SV a[], int n)
{
    for (int i = 1; i<=n; i++)
    {
        printf("Nhap sinh vien thu %d\n: ",i);
        xuatSinhVien(a[i]);
    }
}
int main(){
    int  n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    SV a[n];
    nhapSinhVien(a, n);
    xuatSinhVien(a, n);
}

