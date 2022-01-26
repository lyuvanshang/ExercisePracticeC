#include<stdio.h>
#include<math.h>
int main ()
{
    float x,a,b,c,p,s;
    printf("MOI BAN CHON HINH CAN TINH DIEN TICH:\n1.Hinh vuong\n2.Hinh chu nhat\n3.Hinh tron\n4.Tam giac\n5.Hinh thang\nChon so:");
    scanf("%f",&x);
    if(x==1)
    {
        printf("Nhap do dai canh hinh vuong:");
        scanf("%f",&a);
        printf("Dien tich hinh vuong=%f",a*a);
    }
    if(x==2)
    {
        printf("Nhap do dai 2 canh hinh chu nhat:");
        scanf("%f%f",&a,&b);
        printf("Dien tich hinh chu nhat=%f",a*b);
    }
    if(x==3)
    {
        printf("Nhap do dai ban kinh hinh tron:");
        scanf("%f",&a);
        printf("Dien tich hinh tron=%f",3.14*a*a);
    }
    if(x==4)
    {
        printf("Nhap a,b,c lan luot la 3 canh cua tam giac:");
        scanf("%f%f%f",&a,&b,&c);
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("dien tich tam giac = %f",s);
    }
    if(x==5)
    {
        printf("Nhap vao lan luot Day lon,Day nho,Chieu cao cua hinh thang:");
        scanf("%f%f%f",&a,&b,&c);
        printf("Dien tich hinh thang=%f",((a+b)*c)/2);
    }

}
