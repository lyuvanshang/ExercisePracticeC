#include<stdio.h>
int main()
{
    int a;
    printf("Nhap vao so bat ki:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Ban da chon mon Canh trung, gia 15k.");
    }
    if(a==2)
    {
        printf("Ban da chon mon Thit kho, gia 30k.");
    }
    if(a==3)
    {
        printf("Ban da chon mon Gio hap, gia 30k.");
    }
    if(a==4)
    {
        printf("Ban da chon mon Ca nuong, gia 50k.");
    }
    if((a!=1)&&(a!=2)&&(a!=3)&&(a!=4))
    {
        printf("Nha hang co cac mon nhu sau \nCanh trung(MS1),Thit kho(MS2),Gio hap(MS3),Ca nuong(MS4)");
    }
}
