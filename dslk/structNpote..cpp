#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct DonHang
{
    char tenHang[25];
    int donGia;
    int soLuong;

} DH;

void nhapDH(DH &dh)
{
    printf("Nhap ten hang: ");
    fflush(stdin);
    gets(dh.tenHang);
    printf("Nhap Don Gia: ");
    scanf("%d",&dh.donGia);
    printf("Nhap so luong: ");
    scanf("%d",&dh.soLuong);

}
void nhapDH(DH a[], int n)
{
    for (int i=1; i<=n; i++)
    {
        printf("Nhap san pham thu %d\n",i);
        nhapDH(a[i]);
    }
}
void xuatDH(DH &dh)
{
    //printf("STT\tDon Gia\tSo Luong\tThanh Tien\n");
    printf("%s\t\t%d\t\t%d\t\t%d\n",dh.tenHang,dh.donGia,dh.soLuong,dh.donGia*dh.soLuong);

}
void xuatDH(DH a[], int n)
{
    for (int i = 1; i<=n; i++)
    {
        printf("%d\t",i);
        xuatDH(a[i]);
    }
}

int main()
{
    int n;
    printf("nhap so luong hang: ");
    scanf("%d",&n);
    DH a[n];
    nhapDH(a,n);
    printf("\t----------------------\n");
    printf("STT\tTen Hang\tDon Gia \tSo Luong\tThanh Tien\n");
    xuatDH(a,n);
    printf("\t-----------------------");

}

