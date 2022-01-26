#include<stdio.h>
#include<string.h>

struct sinhvien{

    char hoten[20];
    char lop[10];

    float dtb;

};

 void nhapSv(struct sinhvien a[], int n)
 {
     int i;
     printf(" thong tin sinh vien: \n");
     for (i=1; i<=n;i++)
     {
         printf("\n Ho ten sinh vien %d: ",i);
         gets(a[i].hoten);
         fflush(stdin);
         printf("\nLop: ");
         gets(a[i].lop);
         fflush(stdin);
         printf("\nDiem tb: ");
         scanf("%f", &a[i]);
     }
 }
 void xuat(struct sinhvien a[], int n)
 {
     int i;
     printf("\n\tThong tin sinh vien\n");
     printf("\n%30s %-10s %-7s\n", "Hoten", "Lop", "DiemTB");
     for (i=1;i<=n; i++)
     {
         printf("%30s %-10s %-7s\n"), a[i].hoten, a[i].lop, a[i].dtb;
     }
 }

 int main()
 {
     int i,n;
     struct sinhvien sv[100];
     printf("nhap n: ");
     scanf("%d", &n);
     fflush(stdin);
     nhapSv(sv,n);
     xuat(sv,n);
     getchar();
     return 0;
 }





