#include<stdio.h>
#include<math.h>

int main()
{

    int d;
    printf("nhap d:");
    scanf("%d",&d);

    if (d==2)
    {
        printf("thu hai");
    }
    if (d==3)
    {
        printf("thu ba");

    }
    if (d==4)
    {

        printf("thu tu");
    }
    if (d==5)
    {
        printf("thu 5");
    }
    if (d==6)
    {
        printf("thu sau");
    }
    if (d==7)
    {
        printf("thu bay");
    }
    else if (d==8)
    {
        printf("chu nhat");

    }
    else if (d<2||d>8)
    {
        printf("khong xac dinh");
    }
    return 0;
}
