#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct DonHang {
    char tenHang[25];
    int donGia;
    int soLuong;
    int Tien;
}DH;

void nhap(DH &dh)
{
    printf("Nhap ten hang: ");
    fflush(stdin);
    gets(dh.tenHang);
    printf("Nhap Don Gia: ");
    scanf("%d",&dh.donGia);
    printf("Nhap so luong: ");
    scanf("%d",&dh.soLuong);

}
void nhap(DH a[], int n)
{
    for (int i=1; i<=n; i++)
    {
        printf("Nhap san pham thu %d\n",i);
        nhap(a[i]);
    }
}
void xuat(DH &dh)
{
    //printf("STT\tDon Gia\tSo Luong\tThanh Tien\n");
    printf("%s\t%d\t%d\t%d",dh.tenHang,dh.donGia,dh.soLuong,dh.donGia*dh.soLuong);

}
void xuat(DH a[], int n)
{
    for (int i = 1; i<=n; i++)
    {
        printf("%d\t",i);xuat(a[i]);
    }
}

int main()
{
    int n, a[100];
    printf("nhap so luong hang: ");
    scanf("%d",&n);
    nhap(a,n);
    printf("STT\tTen Hang\tDon Gia\So Luong\tThanh Tien");
    xuat(a,n);

}

