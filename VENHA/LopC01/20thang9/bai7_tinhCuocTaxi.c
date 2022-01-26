#include<stdio.h>
#include<conio.h>

int main()
{
    int nguyen;
    float km,k;
    float Cost=0;

    printf("nhap km:");
    scanf("%f",&km);

    if (km<=0.8)
    {
        Cost= 10000;
        printf("tong so tien:%.2f",Cost);

    }
    else if (0.8<km && 30.8>=km)
    {
        Cost = 10000 + ((km-0.8)*9000);
        nguyen = (int)Cost/1000;
        k=Cost/1000;
        if ((k-nguyen)>=0.5)
        {
            Cost=nguyen*1000+1000;
            printf(" so tien nguoi do phai tra khi di %.1f km la:%.1f VND",km,Cost);
        }
        else
        {
            Cost=nguyen*1000;
            printf(" so tien nguoi do phai tra khi di %.1f km la:%.1f VND",km,Cost);

        }




    }
    else
    {
        Cost = 10000 + ((km-30.8)*8000)+(30*9000);
        nguyen = (int)Cost/1000;
        k=Cost/1000;
        if ((k-nguyen)>=0.5)
        {
            Cost=nguyen*1000+1000;
            printf(" so tien nguoi do phai tra khi di %.1f km la:%.1f VND",km,Cost);
        }
        else
        {
            Cost=nguyen*1000;
            printf(" so tien nguoi do phai tra khi di %.1f km la:%.1f VND",km,Cost);

        }

    }
    return 0;

}


