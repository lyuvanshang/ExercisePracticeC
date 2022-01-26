#include<stdio.h>
#include<math.h>

int main()
{
    int a,i,tong,tich;
    printf("Nhap so nguyen duong a=");
    scanf("%d",&a);
    i=1;
    tong=0;
    tich=1;

    for (i; i<=a; i++)
    {
        if (a%i==0)
        {

            printf("Uoc cua %d = %d\n",a,i);

            tong=tong+i;
            tich=tich*i;

        }


    }
    printf("Tong cua cac uoc so cua so %d la = %d\n",a,tong);
    printf("Tich cua cac uoc so cua so %d la = %d",a,tich);


    return 0;
}
