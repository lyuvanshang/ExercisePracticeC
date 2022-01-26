#include<stdio.h>

int main()
{
    int  a[100000],n,i,tong;
    float tb;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);

    tong=0;
    for (i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        tong=tong+a[i];

    }
    tb=tong / n;
   printf("%.2f",tb);

}
