#include<stdio.h>
#include<math.h>

int main()
{
    int tien;
    float  thue,tienSt;
    printf("nhap so tien:");
    scanf("%d",&tien);

    if (tien>15000000)
    {
        thue=tien*0.3;
        tienSt=tien-thue;
        printf("so tien sau khi tru thue la :%f",tienSt);

    }
    else if (7000000<tien&&15000000>tien)
    {
        thue=tien*0.2;
        tienSt=tien-thue;
        printf("so tien sau khi tru thue la :%f",tienSt);
    }
    else
    {
        thue=tien*0.1;
        tienSt=tien-thue;
        printf("so tien sau khi tru thue la :%f",tienSt);

    }
    return 0;



}
