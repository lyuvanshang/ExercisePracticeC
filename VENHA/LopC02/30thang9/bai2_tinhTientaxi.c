#include<stdio.h>
#include<math.h>

int main()
{

    float km,Cost,du,thuc;
    int nguyen;
    Cost=0;

    printf("nhap so km:");
    scanf("%f",&km);

    if (km<=0.8)
    {

        Cost=10000;
        printf("so tien ban phai tra khi di %.3f KM la:%.1f",km,Cost);

    }
    else if (km>0.8&&km<=30.8)
    {
        Cost=10000+(km-0.8)*9000;
        nguyen=(int)Cost/1000;
        thuc=Cost/1000;
        du=thuc-Cost;
        if (du>=0.5)
        {
            Cost=nguyen*1000+1000;
            printf("so tien ban phai tra khi di %.3f KM la:%.1f",km,Cost);
        }
        else if ( du<0.5)
        {
            Cost=nguyen*1000;
            printf("so tien ban phai tra khi di %.3f KM la:%.1f",km,Cost);
        }

    }
    else if (km>30.8)
    {
        Cost=10000+(30*9000)+((km-30.8)*8000);
        nguyen=(int)Cost/1000;
        thuc=Cost/1000;
        du=thuc-Cost;
        if (du>=0.5)
        {
            Cost=nguyen*1000+1000;
            printf("so tien ban phai tra khi di %.2f KM la:%.1f",km,Cost);
        }
        else if ( du<0.5)
        {
            Cost=nguyen*1000;
            printf("so tien ban phai tra khi di %.2f KM la:%.1f",km,Cost);


        }



    }
    return 0;
}
